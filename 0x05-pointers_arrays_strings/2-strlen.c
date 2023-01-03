#include "main.h"
/**
 * int _strlen - the function that returns the length of a string
 * @s: the char
 *
 * Return: Always 0
*/
int _strlen(char *s)
{
	int a = 0;

	for(; *s++;)
		a++;
	return (a);
}
