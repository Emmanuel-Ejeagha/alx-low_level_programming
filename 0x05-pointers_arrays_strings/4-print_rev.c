#include "main.h"
/**
 * print_rev - this function prints a string,
 * in reverse, followed by a new line.
 * @s:  char
 *
 * Return: Always 0
*/
void print_rev(char *s)
{
	int w = 0, x, y;
	char z;

	while (s[w] != '\0')
	{
		w++;
	}
	y = w - 1;
	for (x = 0; y >= 0 && x < y; y--, x++)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z
	}
}
