#include "function_pointers.h"

/**
 * array_iterator - iterates over arrays
 * @array: argunemt, array to iterate over
 * @size: argument, size of array
 * @action: argument, a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
