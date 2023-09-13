#include "function_pointers.h"

/**
 * print_name - Custom function
 * @name: The name to print
 * @f: The callback to print the name
 *
 * Description: Prints the given name using the callback f
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

