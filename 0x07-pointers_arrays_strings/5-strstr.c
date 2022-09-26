#include "main.h"
#include <string.h>

/**
 *_strstr- finds the fist occurence of a substring
 *@haystack: string to be scanned
 *@needle: small string to be searched within haystack string
 *Return: a value to a pointer on the string occurence
 */

char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);

	return (ret);
}
