#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * number_coin - Search number coin by cent
 *@n: mount of money
 *@multi: number of coin
 *@cent: mount of cent
 * Return: return the multi -1
 */
int number_coin(int n, int multi, int cent)
{
	if (n - (multi * cent) < 0)	/*Search if multi * cent exceed money*/
	{
		return (multi - 1);	/*Decrease multi before return*/
	}
	else
	{
		return (number_coin(n, multi + 1, cent));	/*Increment multi*/
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
		coin = coin + number_coin(money, 1, cent[i]);	/*Stock coin*/
		if (coin != previous_coin)	/*Verify if coin is change*/
		{
			previous_coin = coin;	/*Stock the new value of coin*/
			money = money - (coin * cent[i]);	/*Decrease money*/
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
	int money, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))	/*Control if argument is digit*/
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc > 2)	/*Control if receive 1 argument*/
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 1)	/*If argument receive is 0 nothing to return*/
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", coin(money));	/*Print the number of coin*/
	}
	return (0);
}
