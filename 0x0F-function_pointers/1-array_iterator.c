#include <stddef.h>

/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array.
 *@array: array integer
 *@size: size of array
 *@action: pointer to funtion
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
