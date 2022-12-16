#include <main.h>
/**
 * print_alphabet_x10 - a function that prints alphabet ten times
 *
 * Return: x10 a-z
*/
void
print_alphabet_x10(void)
{
	char alpha, ab;
	ab = 0;

	while (ab < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		ab++;
		_putchar('\n');
	}
}
