#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	(void) argv;

	a = argc - 1;
	printf("%d\n", a);
	return (0);
}
