#include <stdio.h>
/**
 * main - Print lowercase alphabet
 *
 * Return: 0 Always
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
