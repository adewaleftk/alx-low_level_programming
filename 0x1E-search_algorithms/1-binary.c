#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints the elements of the array being searched
 * @array: Pointer to the first element of the array
 * @left: Starting index of the subarray
 * @right: Ending index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
	}
	printf("\n");
}

