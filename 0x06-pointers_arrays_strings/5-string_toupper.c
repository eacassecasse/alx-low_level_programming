/**
 * string_toupper - Custom function
 * @str: pointer to a string to transform
 *
 * Description: Transform all lower to upper on a string
 * Return: char *
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}

		str++;
	}

	return (str);
}
