#include "sort.h"

/**
  * bubble_sort - Sorts an array of integers in ascending
  * order using the Bubble sort algorithm.
  * @array: The array of integers to sort
  * @size: The size of the array of integers
  *
  * Return: Void
  */
void bubble_sort(int *array, size_t size)
{
    int temp = 0, max = 0, swapped = 1;

    if (!array || size < 2)
        return;

    max = size - 1;

    while (swapped)
    {
        swapped = 0;
        for (size_t i = 0; i < max; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
                print_array(array, size);
            }
        }
        max--;
    }
}

