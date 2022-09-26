#include "main.h"
#include <string.h>

/**
 *_strspn-gets the length of a prefix substring
 *@s:string to be scanned
 *@accept:list of characters to match s
 *Return:length
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
