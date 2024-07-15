#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the size of data types
 * Return: 0 - Always success
 */
int main(void)
{
	char c;
	int i;
	long int l_int;
	long long int ll_int;
	float floatVar;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l_int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll_int));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatVar));
	return (0);
}
