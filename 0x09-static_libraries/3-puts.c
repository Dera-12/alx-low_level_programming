#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the length of the string
 */
void _puts(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
