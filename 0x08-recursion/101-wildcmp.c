#include "main.h"

int equal(char *s1, char *s2);
char *move(char *s);

/**
 * wildcmp - compares two strings recursively
 * @s1: string 1
 * @s2: string 2
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	int a = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s2 == '*')
	{
		s2 = move(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			a += wildcmp(s1 + 1, s2 + 1);
		a += equal(s1 + 1, s2);
		return (!!a);
	}
	return (0);
}

/**
 * equal - checks if strings are equal
 * @s1: first string
 * @s2: second string
 *
 * Return: return value
 */
int equal(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (equal(s1 + 1, s2));
}

/**
 * *move - moves
 * @s2: string
 * Return: address
 */
char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1));
	return (s2);
}
