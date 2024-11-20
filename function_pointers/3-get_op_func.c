#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - choose the good op in function of operator
 *@s: the operator
 *Return: result of operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;	/*Search the good op for use function*/
	}
	return (ops[i].f);	/*return the good function or NULL*/
}
