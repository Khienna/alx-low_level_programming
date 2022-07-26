#include "main.h"
#include <stdlib.h>

/**
 * argstostr - arguments to string
 * @ac: argument count
 * @av: argument variable
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j]; j++)
			len++;
	}

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';

	return (s);
}
