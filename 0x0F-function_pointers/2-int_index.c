#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @cmp: pointer to the function to be used to compare values
 * @size: number of elements in the array
 * @array: pointer to array of integers
 * Return: -1 if no match or if size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
