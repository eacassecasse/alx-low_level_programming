/**
 * cap_string - Custom function
 * @str: pointer to a string to transform
 *
 * Description: Capitalize lettesr on a string
 * Return: char *
 */
char *cap_string(char *str)
{
	int i, j;

	char spChar[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};


	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (str[i] == spChar[j])
			{
				if (str[i + 1] >= 'a' && str[i] <= 'z')
					str[i + 1] -= 32;

			}
		}
	}

	return (str);
}
