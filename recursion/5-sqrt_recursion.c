#include "main.h"

/**
 * sqr_multi - search square root and search by multiply
 *@n: number for search square root
 *@multiple: number to multiply
 *Return: square root
 */
int sqr_multi(int n, int multiple)
{
	if (multiple * multiple == n)	/*Verify if result is equal to number*/
		return (multiple);
	else if (multiple * multiple < n)	/*Recursive for search multiple*/
		return (sqr_multi(n, multiple + 1));
	else
		return (-1);	/*If excess end of recursive*/

}
/**
 * _sqrt_recursion - search exception before use check square root
 *@n: number for search square root
 *Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (sqr_multi(n, 1));	/*Use function for search square*/
}
