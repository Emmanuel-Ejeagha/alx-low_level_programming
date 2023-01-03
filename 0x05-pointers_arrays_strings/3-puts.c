#include "main.h"
/**
 * _puts: this function prints a string followed by a new line
 * @str: the string
 *
 *Return: Always 0
*/
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
