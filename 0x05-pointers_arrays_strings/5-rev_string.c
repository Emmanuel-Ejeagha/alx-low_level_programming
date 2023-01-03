#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - prints the character
 * @s: char to check
 *
 * Description: This program reverses a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{

		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}

	}
}
