#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);

#endif /* FUNCTION_POINTER_H */
