#include "main.h"

/**
 * _strncat -concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: integer to be checked
 *
 * Return: appended strings after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, j;

	for (s = 0; dest[s] != '\0'; s++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[s + j] = src[j];
	}
	dest[s + j]  = '\0';
	return (dest);
}
