#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_rev - print in reverse a string chain
 *@s: string chain
 *Return: nothing
 */
void print_rev(char *s)
{
        int count;

        /*printf(" x = %d  \n", s['\0']);

	printf(" ----------------------- \n");*/

        for (count = s['\0']; count >= 0; --count)
        {
                _putchar(s[count]);
		/*_putchar('\n');*/
        }
        _putchar('\n');
}
