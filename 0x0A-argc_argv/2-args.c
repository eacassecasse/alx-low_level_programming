#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: count of the provided arguments
 * @argv: pointer to the strings of the arguments itself
 *
 * Description: prints the name of the program
 * Return: STATUS OF EXECUTION
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
