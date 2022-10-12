#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator  - execute a func given as param on each element fo array
 * @array: array to execute func to use
 * @action: pointer to the func to use
 * @size: size of array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			actionn(array[i]);
		}
	}
}
