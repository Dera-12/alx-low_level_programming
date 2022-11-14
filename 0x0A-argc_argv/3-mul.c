#include <stdlib.h>
#include <stdio.h>

/**
 * main -multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
			return (1);
}
