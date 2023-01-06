#include "main.h"

/**
 *  _sqrt_recursion - return the natural square root of number
 *  @n: number to calculate the square root
 *
 *  Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (actual_sqrt(1, n));
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
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (actual_sqrt(x = 1, y));
}
