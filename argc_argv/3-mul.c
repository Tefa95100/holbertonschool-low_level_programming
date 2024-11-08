#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count number argument
 * @argv: put argument in array
 * Return: return 0 if success return 1 if erro
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
