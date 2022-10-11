#include "dog.h"
#include <stdlib.h>

/**
 *free_dog- memeory to be freed
 *@d: pointer to struct
 *
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
