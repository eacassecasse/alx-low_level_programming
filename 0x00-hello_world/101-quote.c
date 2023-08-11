#include <stdio.h>
#define _GNU_SOURCE
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Description: Prints a string using write function
 * Return: 0 - Always success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - ";
	char str1[] = "Dora Korpar, 2015-10-19\n";

	char output[61];

	strcpy(output, str);
	strcat(output, str1);

	write(1, output, strnlen(output, sizeof(output)));

	return (1);
}
