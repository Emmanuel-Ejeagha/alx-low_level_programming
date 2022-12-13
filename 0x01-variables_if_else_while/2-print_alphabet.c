#include <stdio.h>
<<<<<<< HEAD
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

=======

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
>>>>>>> e5f0e3e504af43709471d238af648ace29dcbab6
	putchar('\n');

	return (0);
}
