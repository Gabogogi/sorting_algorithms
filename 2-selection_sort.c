#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the Selection sort algorithm.
 * @array: The array of integers to sort
 * @size: The size of the array of integers
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 1, temp = 0, min_index = 0, end_index = size - 1;

	if (size < 2)
		return;

	while (i < end_index)
	{
		if (j == size)
		{
			if (i != min_index)
			{
				temp = array[i];
				array[i] = array[min_index];
				array[min_index] = temp;
				print_array(array, size);
			}

			++i;
			min_index = i;
			j = i + 1;
			continue;
		}

		if (array[min_index] > array[j])
			min_index = j;

		++j;
	}
}
