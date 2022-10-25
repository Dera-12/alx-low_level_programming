#include "main.h"

/**
 * puts2 -prints every other character of a string
 * starting with the first character, followed by a new line.
 *
 * @str: the character
 * Return: void
 */
void puts2(char *str)
{
	int character;

	for (character = 0; str[character] != '\0'; character++)
		if (character % 2 == 0)
			_putchar(str[character]);
	_putchar('\n');
}
