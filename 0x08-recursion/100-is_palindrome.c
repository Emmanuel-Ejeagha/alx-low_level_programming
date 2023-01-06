#include "main"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparison - compares each character of the string.
 * @s: string to check
 * @x: small iterator
 * @y: big iterator
 * Return: 1 if palindrome, otherwise 0
 */
int comparison(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 2)
			return (1);
		return (0 + comparison(s, x + 1, y - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparison(s, 0, _strlen_recursion(s) - 1));
}
