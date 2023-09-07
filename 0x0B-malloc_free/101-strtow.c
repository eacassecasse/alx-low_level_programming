#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * is_space - Custom function
 * @c: character to evaluate
 *
 * Description: Evaluates if a char is space or not
 * Return: 1 if is space and 0 otherwise
 */
int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

/**
 * word_count - Custom function
 * @str: string where to count the words
 *
 * Description: Counts the number of words existant in a string
 * Return: Amount of words
 */
int word_count(char *str)
{
	int i = 0, counter = 0, isWord = 0;

	while (str[i] != '\0')
	{
		if (is_space(str[i]) == 1)
			isWord = 0;
		else if (isWord == 0)
		{
			isWord = 1;
			counter++;
		}

		i++;
	}

	return (counter);
}

/**
 * strtow - Custom function
 * @str: Pointer to the string to split
 *
 * Description: Splits a string into words
 * Return: A pointer to a pointer
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
