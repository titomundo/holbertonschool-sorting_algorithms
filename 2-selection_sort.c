#include "sort.h"

/**
* selection_sort - selection sort algorithm in an array
* @array: array to sort
* @size: size of the array
*
* Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
