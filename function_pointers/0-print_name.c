#include "function_pointers.h"

/**
 * print_name - use the fonction with the parameters name
 *@name: name for use in function
 *@f: function with paramater char
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
