#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 *
 * Return: 0 Always (Success)
*/
int main(void)
{
	char  alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
