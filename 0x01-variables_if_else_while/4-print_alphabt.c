#include <stdio.h>
/**
 * main - print lowercase alphabet except letter q and e
 *
 * Return: 0 Always (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
		ch++;
	return (0);
}
