#include "sort.h"

/**
 * custom_quick_sort - Sorts an array of integers in ascending
 * order using the Quick sort algorithm.
 * @array: The array of integers to sort
 * @size: The size of the array of integers
 *
 * Return: Nothing
 */
void custom_quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	custom_quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * custom_quick_sort_recursive - Recursively sorts an array
 * using the Lomuto partition scheme.
 * @array: The array of integers to sort
 * @low: The lower bound of the subarray to sort
 * @high: The higher bound of the subarray to sort
 * @size: The size of the array of integers
 *
 * Return: Nothing
 */
void custom_quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int partition_index = 0;

	if (low < high)
	{
		partition_index = custom_lomuto_partition(array, low, high, size);
		custom_quick_sort_recursive(array, low, partition_index - 1, size);
		custom_quick_sort_recursive(array, partition_index + 1, high, size);
	}
}

/**
 * custom_lomuto_partition - Partitions an array using the Lomuto
 * partition scheme and returns the partition index.
 * @array: The array of integers to partition
 * @low: The lower bound of the subarray to partition
 * @high: The higher bound of the subarray to partition
 * @size: The size of the array of integers
 *
 * Return: The partition index
 */
int custom_lomuto_partition(int *array, int low, int high, size_t size)
{
	int i = 0, j = 0, pivot = 0, temp = 0;

	pivot = array[high];
	i = low;

	for (j = low; j < high; ++j)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			if (temp != array[i])
				print_array(array, size);

			++i;
		}
	}

	temp = array[i];
	array[i] = array[high];
	array[high] = temp;

	if (temp != array[i])
		print_array(array, size);

	return (i);
}

