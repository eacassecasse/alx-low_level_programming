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
	if (argc > 1)
	{
		int i = 1, sum = 0;

		while (i < argc)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);

			i++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
