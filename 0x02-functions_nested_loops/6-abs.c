#include "main.h"

/**
 * _abs -computes the absolute value of an integer.
 * @z: the integer to be computed.
 *
 * Return: the absolute value of the integer.
 */
int _abs(int z)
{
	if (z >= 0)
		return (z);
	else
		return (-z);
}
