#ifndef DOG_H
#define DOG_H

/**
 *struct dog - name of structure
 *@name: first member
 *@age: second member
 *@owner: third member
 *
 * Description: longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
void free_dog(dog_t *d);

#endif /* DOG_H */
