#include "main.h"
/**
 * puts_half - prints half of a string followed by a newline
 * @str: input string.
 * Description: print the second half of the string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int string = 0, i;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		i = (string - 1) / 2;
	else
		i = (string / 2);
	i++;

	for (string = i; str[string] != '\0'; string++)
		_putchar(str[string]);
	_putchar('\n');
}
