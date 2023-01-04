#include "main.h"
/**
 * puts2char - fuction that prints every other char of a string
 * @str: char to check
 *
 * Description: prints every other char of a string
 * Return: Always 0
 */
void puts2char(char *str)
{
	int count = 0;
	int m = 0;
	char *p = str;
	int n;

	while (*p != '\0')
	{
		p++;
		count++;
	}
	m = count - 1;
	for (n = 0; n <= m; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
