#include "main.h"
/**
 * _puts: this function prints a string followed by a new line
 * @str: the string
 *
 *Return: Always 0
*/
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
	_putchar(*str);

	}
	_putchar('\n');
}
