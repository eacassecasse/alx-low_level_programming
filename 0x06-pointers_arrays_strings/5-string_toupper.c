/**
 * string_toupper - Custom function
 * @str: pointer to a string to transform
 *
 * Description: Transform all lower to upper on a string
 * Return: char *
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	
	return (str);
}
