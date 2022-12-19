#include "main.h"
/**
 * print_alphabet_x10 - a function that prints alphabet ten times
 *
*/
void print_alphabet_x10(void)
{
<<<<<<< HEAD
	char alpha, ab;
	co = 0;

	while (co < 10)
=======
	char letter;
	int count = 0;

	while (count++ <= 9)
>>>>>>> 5b69c2f48dbc874888034be2a2ab6932c35607d4
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
<<<<<<< HEAD
		co++;
		_putchar('\n');
=======
	_putchar('\n');
>>>>>>> 5b69c2f48dbc874888034be2a2ab6932c35607d4
	}
}
