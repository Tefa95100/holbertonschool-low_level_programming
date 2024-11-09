#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * 
 * 
 * 
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
 * 
 * 
 * 
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
 * 
 * 
 * 
 * 
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