#include <stdio.h>
#include <stdlib.h>

/**
 * number_coin - Search number coin by cent
 *@n: mount of money
 *@multi: number of coin
 *@cent: mount of cent
 * Return: return the multi -1
 */
int number_coin(int n, int multi, int cent)
{
	if (n - (multi * cent) < 0)
	{
		return (multi - 1);
	}
	else
	{
		return (number_coin(n, multi + 1, cent));
	}
}
/**
 * coin - count the number of coin
 *@money: mount of money
 *Return: the number of coins
 */
int coin(int money)
{
	int cent[5] = {25, 10, 5, 2, 1};
	int i;
	int coin = 0;
	int previous_coin = 0;

	for (i = 0; i < 5; i++)
	{
		coin = coin + number_coin(money, 1, cent[i]);
		if (coin != previous_coin)
		{
			previous_coin = coin;
			money = money - (coin * cent[i]);
		}
	}
	return (coin);
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
	int piece = 0;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 1)
	{
		printf("0\n");
	}
	else
	{
		piece = coin(money);
		printf("%d\n", piece);
	}
	return (0);
}
