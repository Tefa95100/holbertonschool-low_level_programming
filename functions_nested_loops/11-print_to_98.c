#include "main.h"

/**
 *print_to_98 - print all numbers to n to 98
 *@n: numbers for start
 *Return: return a count start to n to 98
 */
void print_to_98(int n)
{
	int result;
	int result_deux;

	if (n <= 98)
		for (; n <= 98; n++)
		{
			if (n < -100)
				print_3_digit(n);
			else if (n > -100 && n < -9 || n > 9 && n < 99)
				print_2_digit(n);
			else if (n > -10 && n < 10)
				_putchar(n);
		}
	else if (n >= 98)
		for (; n >= 98; n--)
		{
			if (n > 100)
				print_3_digit(n);
			else
				print_2_digit(n);
		}
}

/**
 *print_3_digit - take n and print all digit with _putchar()
 *@n: the numbers for print
 */
void print_3_digit(int n)
{
	result = n / 100;
	_putchar(result + '0');
	result_deux = (n - (result * 100)) / 10;
	_putchar(result_deux + '0');
	result = n % 10;
	_putchar(result + '0');
}

/**
 *print_2_digit - take n and print all digit with _putchar()
 *@n: the numbers for print
 */
void print_2_digit(int n)
{
	result = n / 10;
	_putchar(result + '0');
	result = n % 10;
	_putchar(result + '0');
}
