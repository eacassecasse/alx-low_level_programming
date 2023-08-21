/**
 * swap_int - Custom function
 * @a: pointer to the first int to swap
 * @b: pointer to the second int to swap
 *
 * Description: Swaps 2 integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int a_value, b_value;

	a_value = *a;
	b_value = *b;
	*a = b_value;
	*b = a_value;
}
