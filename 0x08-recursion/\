#include "main"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is _palindrome - checks if a string is a palindrome
 * * @s: string to reverse
 *
 * Return: 1 if true or 0 if false
 */
int is_palindrone(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length
 *
 * Return: length of the string
 */
int _strlen_recursion(cha *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len
 * : length of the string
 *
 * Return: 1 if palindrome, otherwise 0.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (1 >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
