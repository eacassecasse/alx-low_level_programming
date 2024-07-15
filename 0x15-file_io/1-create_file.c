#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Custom function
 * @filename: The name of the file to create
 * @text_content: Text to write inside the file
 *
 * Description: creates a file and write on it
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, fw, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fw = write(file, text_content, length);

	if (file == -1 || fw == -1)
		return (-1);

	close(file);

	return (1);
}
