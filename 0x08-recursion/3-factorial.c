#include <stdio.h>
/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 * Return: faactorial of n
 */
int factorial(int a)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
