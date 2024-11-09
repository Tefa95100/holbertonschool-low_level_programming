#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * coin - count the number of coin
 *@money: mount of money
 *Return: the number of coins
 */
int coin(int money)
{
	int cent[5] = {25, 10, 5, 2, 1};
	int i;
	int coin_count = 0;

	for (i = 0; i < 5; i++)
	{
		coin_count = coin_count + (money / cent[i]); /*Calcul nbr of coin*/
		money %= cent[i];	/*Calculate reste of money*/
	}
	return (coin_count);
}
/**
 * main- entry point
 *@argc: number of argument
 *@argv: stock argument
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	int money;

	if (argc != 2)	/*Control if receive 1 argument*/
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 1)	/*If argument receive is 0 or less nothing to return*/
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", coin(money));	/*Print the number of coin*/
	}
	return (0);
}
