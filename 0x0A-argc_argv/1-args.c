#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: count of arguments provided
 * @argv: pointer to the strings of the arguments itself
 *
 * Description: prints the name of the program
 * Return: STATUS OF EXECUTION
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
