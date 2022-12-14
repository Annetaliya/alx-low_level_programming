#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 *struct printer- a new struct type defining a printer
 *@symbol: representing data type
 *@print: a function pointer that prints
 * a data type correspomding to symbol
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
