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
	int res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", res);

	return (0);
}
