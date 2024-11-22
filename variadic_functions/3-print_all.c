#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_char - print a char
 *@arg_print: argument for print
 */
void print_char(va_list arg_print)
{
	printf("%c", va_arg(arg_print, int));
}
/**
 * print_int - print a int
 *@arg_print: argument for print
 */
void print_int(va_list arg_print)
{
	printf("%d", va_arg(arg_print, int));
}
/**
 * print_float - print a float
 *@arg_print: argument for print
 */
void print_float(va_list arg_print)
{
	printf("%f", va_arg(arg_print, double));
}
/**
 * print_string - print a string
 *@arg_print: argument for print
 */
void print_string(va_list arg_print)
{
	char *string_print = va_arg(arg_print, char *);

	/*Check if string is null for replace by (nil)*/
	if (string_print == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", string_print);
}
/**
 * print_all - print all parameter receive
 *@format: the char for choose the function
 */
void print_all(const char * const format, ...)
{
	/*declaration of list*/
	va_list arg_print;
	/*create an array of struct*/
	select_function choose_func[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	/*index for browse*/
	int i = 0;
	int j;
	char *sep = "";

	/*Initialize list*/
	va_start(arg_print, format);
	/*Browse format*/
	while (format != NULL && format[i])
	{
		j = 0;
		/*browse array of function*/
		while (choose_func[j].type != '\0')
		{
			/*compare for search a correspondance if find print variable*/
			if (format[i] == choose_func[j].type)
			{
				/*Print separator before print argument*/
				printf("%s", sep);
				choose_func[j].func(arg_print);
				sep = ", ";	/*Initialize separot with ', '*/
				break;	/*Break loop*/
			}
			j++;
		}
		i++;
	}
	/*Clean list*/
	va_end(arg_print);
	printf("\n");
}
