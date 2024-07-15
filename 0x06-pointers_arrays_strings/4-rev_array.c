#include "main.h"

/**
 * reverse_array - Custom function
 * @a: array to reverse
 * @n: size of the array
 *
 * Description: Revrses the content of an array of integers
 * Return: *dest strings concatenated
 */

void reverse_array(int *a, int n)
{
	int val;
	int startPos;
	int endPos;

	startPos = 0;
	endPos = n - 1;

	while (startPos < endPos)
	{
		val = *(a + startPos);
		*(a + startPos) = *(a + endPos);
		*(a + endPos) = val;

		startPos++;
		endPos--;
	}
}
