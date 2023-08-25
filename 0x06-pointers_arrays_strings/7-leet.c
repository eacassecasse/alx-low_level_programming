/**
 * leet - Custom function
 * @str: pointer to a string to transform
 *
 * Description: Replace specific letters on a string
 * Return: char *
 */
char *leet(char *str)
{
	int i, j;

	char *letters = "aAeEoOtTlL";
	char *digits = "4433007711";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = digits[j];
			}
		}
	}

	return (str);
}
