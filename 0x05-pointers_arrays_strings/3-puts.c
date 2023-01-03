#include "main.h"
/**
 * _puts: this function prints a string followed by a new line
 * @str: the string
 *
 *Return: Always 0
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
