#include "sort.h"

/**
 * selection_sort - that method sorting a array for selection mode
 * 
 * 
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k, tmp;
	int p_min, pos;

	for(j = 0; j < size; j++)
	{
		p_min = array[j];
		pos = 0;
		for(i = j; i < size; i++)
		{
			if (p_min > array[i])
			{
				p_min = array[i];
				k = i;
				pos = 1;
			}
		}
		if (pos == 1)
		{
			tmp = array[j];
			array[j] = array[k];
			array[k] = tmp;
		}
	print_array(array, size);
	}
}