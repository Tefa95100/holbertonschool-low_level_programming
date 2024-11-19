#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point of programm
 *@argc: count number of argument
 *@argv: stock argument in an array
 *Return: return result
 */
int main(int argc, char *argv[])
{
	int first;
	int second;
	char *op = argv[2];

	if (argc != 4)	/*Check the number of argument*/
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL)	/*Check if the second argument is not NULL*/
	{
		printf("Error\n");
		exit(99);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	if ((*op == '/' && second == 0) || (*op == '%' && second == 0))
	{
		printf("Error\n");	/*Check if the 2 nbr not 0 in division or modulo*/
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(first, second));	/*Print result*/
	return (0);
}
