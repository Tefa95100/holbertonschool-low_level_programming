#include "main.h"

/**
 *print_to_98 - print all numbers to n to 98
 *@n: numbers for start
 *Return: return a count start to n to 98
 */

/*Prototype*/
void print_to_98(int n);
void print_3_digit(int n);
void print_2_digit(int n);

void print_to_98(int n)
{
	int p;

	if (n <= 98)
		for (; n <= 98; n++)
		{
			if (n < -100)
			{
				print_3_digit(n);
				_putchar(',');
				_putchar(' ');
			}
			else if ((n >= -100 && n < -9) || (n > 9 && n < 98))
			{
				print_2_digit(n);
				_putchar(',');
				_putchar(' ');
			}
			else if (n > -10 && n < 10)
			{
				if (n < 0)
				{
					_putchar('-');
					p = n * -1;
					_putchar(p + '0');
				}
				else
					_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				print_2_digit(n);
				_putchar('\n');
			}
		}
	else if (n >= 98)
		for (; n >= 98; n--)
		{
			if (n >= 100)
			{
				print_3_digit(n);
				_putchar(',');
				_putchar(' ');
			}
			else if (n != 98)
			{
				print_2_digit(n);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				print_2_digit(n);
				_putchar('\n');
			}
		}
}

/**
 *print_3_digit - take n and print all digit with _putchar()
 *@n: the numbers for print
 */
void print_3_digit(int n)
{
	int result;
	int result_deux;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
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
	int result;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	result = n / 10;
	_putchar(result + '0');
	result = n % 10;
	_putchar(result + '0');
}
