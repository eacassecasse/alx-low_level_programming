#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Custom function
 * @s: pointer to an char to count
 *
 * Description: Counts string
 * Return: int
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * _strcpy - Custom function
 * @dest: pointer to the first param to swap
 * @src: pointer to the second param to swap
 *
 * Description: Copies a string to the buffer
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Custom Function
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Dog's owner
 *
 * Description: Creates a new dog
 * Return: A new dog or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
