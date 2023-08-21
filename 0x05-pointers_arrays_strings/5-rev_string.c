#include "main.h"

/**
 * rev_string - Custom function
 * @s: pointer to an char to reverse
 *
 * Description: Reverse a given string
 * Return: void
 */
void rev_string(char *s)
{

	char val;
	char *endPtr, *startPtr;

	endPtr = s;

	while (*endPtr != '\0')
	{
		endPtr++;
	}

	endPtr--;

	startPtr = s;

	while (startPtr < endPtr)
	{
		val = *startPtr;
		*startPtr = *endPtr;
		*endPtr = val;

		startPtr++;
		endPtr--;
	}

}
