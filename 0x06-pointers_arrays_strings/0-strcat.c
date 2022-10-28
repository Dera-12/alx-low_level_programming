#include "main.h"
#include <string.h>

/**
 * _strcat -concatenates two strings
 * @str1: destination string
 * @str2: source string
 *
 * Return:  value of the string after concentation
 */
char *_strcat(char *dest, char *src)
{
	char str1[98] = "Hello ";
	char str2[] = "World!\n";

	strcat(str1, str2);
	return (dest);
}
