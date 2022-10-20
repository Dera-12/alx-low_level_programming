#include "main.h"

/**
 * print_last_digit -print the last digit of a number
 * @l: the number to be print
 *
 * Return: the last digit of a number
*/
int print_last_digit(int l)
{
	int last_digit = l % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
