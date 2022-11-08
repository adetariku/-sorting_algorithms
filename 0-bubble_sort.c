#include "sort.h"
/**
 * bubble_sort - sorts an array
 * @array: pointer to integer array
 * @size: the size of the array
 *
 * Returns: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t indx_outer, indx_inner;
	int temp;

	if (!array || size <= 0)
		return;
	for (indx_outer = 0; indx_outer < size; indx_outer++)
	{
		for (indx_inner = 0; indx_inner < size - indx_outer - 1; indx_inner++)
		{
			if (array[indx_inner] > array[indx_inner + 1])
			{
				temp = array[indx_inner];
				array[indx_inner] = array[indx_inner + 1];
				array[indx_inner + 1] = temp;
				print_array(array, size);
			}
		}
	}

}
