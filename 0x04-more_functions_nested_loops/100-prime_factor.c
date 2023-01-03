#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, pq;

	n = 612852475143;
	for (pq = 2; pq <= n; pq++)
	{
		if (n % pq == 0)
		{
			n /= pq;
			pq--;
		}

	}
	printf("%ld\n", pq);
	return (0);
}
