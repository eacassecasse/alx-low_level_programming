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
	int i, no, res;
	int cents [] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	no = atoi(argv[1]);
	res = 0;

	if (no < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (no >= cents[i])
		{
			res++;
			no -= cents[i];
		}
	}

	printf("%d\n", res);

	return (0);
}
