#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if NULL or not found.
 */

int binary_search(int *array, size_t size, int value)
{
        size_t i, left, right, mid;
	
	if (array == NULL)
		return (-1);
        for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
        	for (i = left; i <= right; i++)
			printf("%d", array[i]);
		printf("\n");

		mid = left + (right - left) / 2;

		if (left > right)
                	return (-1);

               	if (array[mid] == value)
                	return (mid);
                else if (array[mid] > value)
                       	right = mid - 1;
                else
                       	left = mid + 1;
        	
	}

        return (-1);
}

