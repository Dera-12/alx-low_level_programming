#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s: change string
 *
 * Return: character
 */
char *string_toupper(char *s)
{
int k;

k = 0;
	while (*(s + k))
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
			*(s + k) -= 'a' - 'A';
		k++;
	}
	return (s);
}
