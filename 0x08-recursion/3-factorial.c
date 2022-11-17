#include "main.h"

/**
 * factorial -returns the factorial of a given nu
 * ber
 * Description:If n is lower than 0, the function
 * should return -1 to indicate an error
 * Factorial of 0 is 1
 * @n: number to be inputted
 *
 * Return: the number factorized
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
