/**
 * rot13 - Custom function
 * @str: pointer to a string to encrypt
 *
 * Description: Applis ROT13 encryption to a given string
 * Return: The encrypted string
 */
char *rot13(char *str)
{
	int i, j;

	char *alpbt = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *eqvalnt = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpbt[j] != '\0'; j++)
		{
			if (str[i] == alpbt[j])
			{
				str[i] = eqvalnt[j];
				break;
			}
		}
	}

	return (str);
}
