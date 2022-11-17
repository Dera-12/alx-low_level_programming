#include "main.h"

/**
 * _pow_recursion - returns the value of x raised
 * tonthe power of y
 * @x: integer
 * @y: integer
 * Description: if y y is lower than 0, the funct
 * ion should return -1
 *
 * Return: the output
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
