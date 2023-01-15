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
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
		j++;


	duplicate = (char *)malloc((sizeof(char) * j) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= j; i++)
	{
		duplicate[i] = str[i];
	}
	copy[j] = '\0';

	return (duplicate);
}
