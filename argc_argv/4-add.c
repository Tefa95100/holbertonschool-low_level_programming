#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: count number argument
 * @argv: put argument in array
 * Return: return 0 if success
 */
int main(int argc, char *argv[])
{
    int i;
    int number;
    int sum = 0;
    int previous_sum = 0;

    if (argc == 1)
    {
        printf("0\n");
    }
    for (i = 0; i < argc; i++)
    {
        number = atoi(argv[i]);
        sum = sum + number;
        if (previous_sum == sum)    
        {
            printf("Error\n");
            return (1);
        }
        previous_sum = sum;
    }
    printf("%d\n", sum);
    return (0);
}