#include <stdio.h>

/**
 * Main - Print alphabet in lowercase followed by a newline
 *
 * Return: 0 Always (Success)
*/
 int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++);
		putchar(letter);
	putchar('\n');

	return (0);
}
