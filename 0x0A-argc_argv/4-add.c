#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int c;
	int sum = 0;
	char *b;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		c = strtol(argv[a], &b, 10);
		if (*b)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
