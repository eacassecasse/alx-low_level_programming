#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Custom function
 * @filename: The name of the file to read on
 * @letters: Amount of characters to read
 *
 * Description: Reads a text file and print to STDOUT
 * Return: The amount of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename)
	{
		ssize_t file, fr, fw;
		char *buf = malloc(sizeof(char) * letters);

		if (!buf)
			return (0);

		file = open(filename, O_RDONLY);

		if (file < 0)
		{
			free(buf);
			return (0);
		}

		fr = read(file, buf, letters);

		if (fr < 0)
		{
			free(buf);
			return (0);
		}

		fw = write(STDOUT_FILENO, buf, fr);

		if (fw < 0 || fw != fr)
		{
			free(buf);
			return (0);
		}

		free(buf);
		close(file);

		return (fw);
	}

	return (0);
}

