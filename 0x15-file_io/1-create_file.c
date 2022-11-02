#include "main.h"
#include <stdlib>

/**
 *create_file - creates a file
 *@filename: pointer to the name of file created
 *@text_content:pointer to a string to write to the file
 *Return: if the function fails -1 else 1
 */

int create_file(const char *filename, char *text_content)
{
	int 0, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | 0_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
