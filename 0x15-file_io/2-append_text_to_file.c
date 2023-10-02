#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Custom function
 * @filename: The name of the file to modify
 * @text_content: Text to write inside the file
 *
 * Description: Appends text to a file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename)
	{
		int file, fw = 0, length = 0;

		file = open(filename, O_RDWR | O_APPEND);

		if (file < 0)
			return (-1);

		if (text_content)
		{
			while (text_content[length])
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

