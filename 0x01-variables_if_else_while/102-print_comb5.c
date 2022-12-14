#include <stdio.h>
/**
 * main - print combination of two two-digits numbers
 *
 * Return: 0 Always (Sucess)
*/
int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 <= '99', num1++)
	{
		for (num2 = '0'; num2 <= '99'; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
