#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct char_function - structure for choose a function
 *@type: char for selection of good function
 *@func: function to use
 */
typedef struct char_function
{
	char type;
	void (*func)(va_list argument);
} select_function;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
