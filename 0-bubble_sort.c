#include "sort.h"

/**
* bubble_sort - displays the bubble sorting algorithm
* @array: array to sort
* @size: size of array
*
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int aux, swp = 1;

	if (size < 2)
	{
		print_array(array, size);
		return;
	}

	while (swp != 0)
	{
		swp = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;

				print_array(array, size);
				swp = 1;
			}
		}
	}
}
