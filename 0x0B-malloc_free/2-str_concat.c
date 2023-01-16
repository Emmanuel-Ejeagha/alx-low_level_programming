#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - this program concatenates two strings
 * @s1: the first string
 * @s2: the second string.
 *
 * Return: the pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int x, y, z, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	result = malloc(sizeof(char) * (x + y + 1));

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (z = 0; z < x; z++)
		result[z] = s1[z];

	len = y;
	for (y = 0; y <= len; y++) z++;
		result[z] = s2[y];

	return (result);
}
