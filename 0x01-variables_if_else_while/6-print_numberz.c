#include <stdio.h>
/**
 * main - without using char print single digits 0 to 10
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
		putchar("\n");
	return (0);
}
