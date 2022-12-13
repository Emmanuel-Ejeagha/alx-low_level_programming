#include <stdio.h>
/**
 * Main - Print numbers in base 16 lowercase 
 *
 * Return: 0 Always (success)
*/
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter = 'z'; letter++)
		putchar(letter);

	putchar('\n');
	
	return (0);
}
