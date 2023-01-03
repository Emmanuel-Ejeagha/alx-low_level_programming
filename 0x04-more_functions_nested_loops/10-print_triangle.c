#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, k;

	for (i = 0; i < size; i++)
	{
		for (k = 1; k < (size - i); k++)
			_putchar(' ');
		for (k--; k < size; k++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
