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
	if (filename)
	{
		int file, fw = 0, length = 0;

		file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

		if (file < 0)
			return (-1);

		if (text_content)
		{
			while(text_content[length])
				length++;
		}

		fw = write(file, text_content, length);

		if (fw < 0)
			return (-1);

		close(file);

		return (fw);
	}

	return (-1);
}

