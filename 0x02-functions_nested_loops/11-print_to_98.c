#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - Custom function
 * @n: integer parameter to limit the loop
 *
 * Description: Prints number from n to 98
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i  >= 98; i--)
		{
			(i != 98) ? printf("%d, ", i) : printf("%d\n", i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			(i != 98) ? printf("%d, ", i) : printf("%d\n", i);
		}
	}
}
