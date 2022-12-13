#include <stdio.h>
/**
 * Main - print combination of numbers with comma and space
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar(c);
	return (0);
}
