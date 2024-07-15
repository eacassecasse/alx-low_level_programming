#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: counter of supplied arguments
 * @argv: list of arguments supplied
 *
 * Description: Copies content of one file to another
 * Return: Always 0 - success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * create_buf - Custom function
 * @file: The file to associate the buffer with
 *
 * Description: Allocates a buffer for file operations
 * Return: The address of the new allocated memory
 */
char *create_buf(const char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * copy_file - Custom function
 * @file_from: source file
 * @file_to: destination file
 *
 * Description: Copies file content to another file
 * Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
	char *buffer;
	int from, to, fr, fw;

	buffer = create_buf(file_to);
	from = open(file_from, O_RDONLY);

	fr = read(from, buffer, 1024);
	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || fr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}

		fw = write(to, buffer, fr);

		if (to == -1 || fw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(99);
		}

		fr = read(from, buffer, 1024);
		to = open(file_to, O_WRONLY | O_APPEND);

	} while (fr > 0);

	free(buffer);
	close_file(from);
	close_file(to);
}


/**
 * close_file - Custom function
 * @file: The descriptor of the file to close
 *
 * Description: Close a file identified by the desriptor
 * Return: void
 */
void close_file(int file)
{
	if (close(file) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

