#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct print_struct - Structure for use the good function for print arg
 *@type: char for selection
 *@func: function to use
 */
struct print_struct
{
	char type;
	void (*func)(va_list argument);
} select_function;

#endif
