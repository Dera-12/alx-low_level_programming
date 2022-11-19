#include "function_pointers.h"

/**
 * array_iterator - function that execute a funct
 * ion given as a parameter on each element of a
 * n array
 * @size: size of array
 * @action: pointer to the function
 * @array: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
for (i = 0; i < size; i++)
action(array[i]);
}
