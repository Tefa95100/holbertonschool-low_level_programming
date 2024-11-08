#include <stdio.h>

/**
 * main - Entry point
 * @argc: count number argument
 * @argv: put argument in array
 * Return: return 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
