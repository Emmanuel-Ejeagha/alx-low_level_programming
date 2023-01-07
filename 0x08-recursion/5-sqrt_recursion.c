#include "main.h"

/**
 *  _sqrt_recursion - return the natural square root of number
 *  @n: number to calculate the square root
 *
 *  Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (actual_sqrt(n, 2));
}

/**
 * actual_sqrt - checks the square root of a number
 * @x: number to calculate the square root
 * @y: iterator
 *
 * Return: the result of square root
 */
int actual_sqrt(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + power_operation(x, y + 1));
}
