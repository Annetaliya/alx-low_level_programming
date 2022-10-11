#include "dog.h"
#include <stdlib.h>

/**
 * _strlen- finds the length of a string
 * @str: the string to be measured
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by str
 * @dest: the buffer storing the string copy
 * @src: the sorce string
 *
 * Return: the pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 *new_dog- function that creates a new dog
 *@name: first member
 *@age: second member
 *@owner: third member
 *
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m;

	if (name == NULL || age < 0 || owner == NULL)
	       return (NULL);

	m = malloc(sizeof(dog_t));
	if (m == NULL)
		return (NULL);
	m->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (m->name == NULL)
	{
		free(m);
		return (NULL);
	}

	m->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (m->owner == NULL)
	{
		free(m->name);
		free(m);
		return (NULL);
	}
	m->name = _strcopy(m->name, name);
	m->age = age;
	m->owner = _strcopy(m->owner, owner);

	return (m);
}
