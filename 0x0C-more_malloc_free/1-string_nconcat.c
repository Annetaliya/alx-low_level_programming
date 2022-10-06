#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat- function that concatinates two strings
 *@s1: source string
 *@s2: destination string
 *@n:maximum number of bytes of s2 to cancatenate s1
 *Return: if it fails it shoul return Null
 *otherwise a pointer to the concatenated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int len = n;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		dest[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		dest[len++] = s2[i];

	dest[len] = '\0';
	return (dest);
}
