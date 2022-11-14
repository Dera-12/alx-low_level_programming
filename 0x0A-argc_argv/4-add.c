#include <stdio.h>
#include <stdlib.h>

/**
 * main -add 2 positive numbers and print the result
 * Return: 1 if error, 0 if function runs properly.
 */
int main(int argc, char *argv[])
{
	int sum, i, j;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			num = atoi(argv[i]);
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
