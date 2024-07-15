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
	int i, j, k, no, sum;

	i = 1;
	k = 1;
	sum = 0;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
		}

		i++;
	}

	while (k < argc)
	{
		no = atoi(argv[k]);

		if (no >= 0)
			sum += no;

		k++;
	}

	printf("%d\n", sum);

	return (0);
}
