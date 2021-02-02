#include "sort.h"


/**
 * swap_int - swap two numbers
 * @cheese: firts number
 * @bacon: second number
 * Return: void
 */

void swap_int(int *cheese, int *bacon)
{
	int pizza;

	pizza = *cheese;
	*cheese = *bacon;
	*bacon = pizza;
}

/**
 * partition_beer - lomuto partition
 * @array: pointer to initial array
 * @low: low
 * @high: high
 * @size: size of array
 * Return: void
 */

int partition_beer(int *array, int low, int high, size_t size)
{
	int beer = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= beer)
		{
			
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}	
			i++;	
		}
	}
	if (i != high)
	{
		swap_int(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * burgerquick - recursive function
 * @array: pointer to initial array
 * @low: initial length of array
 * @high: pointer to array
 * @size: size to array
 * Return: nothing
 */

void burgerquick(int *array, int low, int high, size_t size)
{
	int burger;

	if (low < high)
	{
		burger = partition_beer(array, low, high, size);
		burgerquick(array, low, burger - 1, size);
		burgerquick(array, burger + 1, high, size);
	}
}

/**
 * quick_sort - function that sorts an array of int
 * @array: array of integers
 * @size: size of array
 * Return: array of integers in ascending order
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	burgerquick(array, 0, size - 1, size);
}
