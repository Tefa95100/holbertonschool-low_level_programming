#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - First entry of programm
 *Return: return 0
 */
int main(void)
{
	int n;/*generate random number*/
	int l;/*Last digit of n*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (f == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else if (f > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n);
	return (0);
}
