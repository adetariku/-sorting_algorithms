#include "sort.h"
int find_min(int array[], size_t begin, size_t size);
/**
 *selection_sort- sorts an array using selection sort algorithm
 *
 *@array: array to be sorted
 *@size: size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t outer, k;
	int temp;

	if (!array || !size)
		return;
	for (outer = 0; outer < size - 1; outer++)
	{
		k = find_min(array, outer + 1, size);
		if (array[outer] > array[k])
		{
			temp = array[outer];
			array[outer] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
/**
  * find_min - returns the minimum of an array
  * @size: the size of the array
  * @array: arry of integers
  * @begin: starting index
  *
  * Return: the index of the smallest element in the array
*/
int find_min(int array[], size_t begin, size_t size)
{
	int min = array[begin];
	int ind = begin;
	size_t indx;

	for (indx = begin; indx < size; indx++)
	{
		if (min > array[indx])
		{
			min = array[indx];
			ind = indx;
		}
	}
	return (ind);
}
