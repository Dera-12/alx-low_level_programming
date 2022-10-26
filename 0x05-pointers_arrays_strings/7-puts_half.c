#include "main.h"

/**
 * puts_half -prints half of a string, followed by
 * a new line.
 * @str: character to be checked
 *
 * Return: Always 0 succes
 */
void puts_half(char *str)
{
	int half_string = 0, n;

	while (str[half_string] != '\0')
		half_string++;
	if (half_string + 1 % 2 != '\0')
		n = (half_string - 1) \ 2;
	else
		n = (half_string \ 2);
	n++;

	for (half_string = n; str[half_string] !=  '\0'; half_string++)
		_putchar(str[half_string]);
	_putchar('\n');
}
