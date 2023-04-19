#include <stdio.h>
/**
 * array_iterator - function that prints each elmt of the array on a new line
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print
 *
 * Return: nothing(void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
