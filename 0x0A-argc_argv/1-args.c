#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * into it, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
