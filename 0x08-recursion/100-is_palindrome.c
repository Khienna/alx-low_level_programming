#include "main.h"

int pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion -  returns length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pal - checks for palindrome
 * @s: string
 * @i: integer
 * @len: length
 * Return: 1
 */
int pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (pal(s, i + 1, len - 1));
}
