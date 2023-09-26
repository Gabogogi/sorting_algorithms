#include "sort.h"

/**
  * custom_bubble_sort - Sorts an array of integers in ascending
  * order using the Bubble sort algorithm.
  * @arr: The array of integers to sort
  * @length: The size of the array of integers
  *
  * Return: Void
  */
void custom_bubble_sort(int *arr, size_t length)
{
    int temp = 0, max_index = 0, did_swap = 1;

    if (!arr || length < 2)
        return;

    max_index = length - 1;

    while (did_swap)
    {
        did_swap = 0;
        for (size_t i = 0; i < max_index; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                did_swap = 1;
                print_array(arr, length);
            }
        }
        max_index--;
    }
}

