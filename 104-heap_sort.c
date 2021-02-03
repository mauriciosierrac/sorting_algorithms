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
 * heapburger - swap two numbers
 * @array: pointer to initial array
 * @cheese: firts number
 * @bacon: second number
 * Return: void
 */


void heapburger(int *array, int cheese, int bacon)
{
	int burger = bacon;
	int left = 2 * bacon + 1;
	int right = 2 * bacon + 2;

	if (left < cheese && array[left] > array[burger])
		burger = left;

	if (right < cheese && array[right] > array[burger])
		burger = right;

	if (burger != bacon)
	{
		swap_int(&array[bacon], &array[burger]);
		heapburger(array, cheese, burger);
	}
}

/**
 * heap_sort - swap two numbers
 * @array: pointer to initial array
 * @size: size of array
 * Return: void
 */

void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	for (i = size / 2 - 1; i >= 0; i--)
	{
		heapburger(array, size, i);
		print_array(array, size);
	}

	for (i = size - 1; i >= 0; i--)
	{
		swap_int(&array[0], &array[i]);
		heapburger(array, i, 0);
		print_array(array, size);
	}
	print_array(array, size);
}
