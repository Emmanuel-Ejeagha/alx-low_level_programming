#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - prints the character
 * @s: char to check
 *
 * Description: This program reverses a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int w = 0, x, y;
	char = z;

	while (s[w] != '\0')
	{
		w++;
	}
	y = w - 1;
	for (x = 0; y >= 0 && x < y; y--, x++)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
	}

}
