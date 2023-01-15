#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string
 *
 * Return: pointer of an array
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0';)
		;

	duplicate = (char *)malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		duplicate[j] = str[j];
	}
	return (duplicate);
}
