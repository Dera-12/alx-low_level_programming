#include "function_pointers.h"

/**
 * int_index -searches for an integers
 * @array: array of integers
 * @size: size of arrays
 * @cmp: pointers to function used to compare va
 * lues
 *
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

if (array && cmp)

for (z = 0; z < size; z++)
if (cmp(array[z]))
return (z);

	return (-1);
}
