#include "function_pointers.h"

/**
 * array_iterator - this executes a function given as a
 * parameter on each element of an array.
 * @array: to input integer array.
 * @size: the size of the array.
 * @action: the pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
