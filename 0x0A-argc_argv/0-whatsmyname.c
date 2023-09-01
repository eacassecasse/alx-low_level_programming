#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: count of the arguments provided
 * @argv: pointer to the strings of the arguments itself
 *
 * Description: prints the name of the program
 * Return: STATUS OF EXECUTION
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
