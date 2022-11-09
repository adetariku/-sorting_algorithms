#include "sort.h"
/**
  *swap -a function to swap two elements
  *@pos1: the value at positon 1
  *@pos2: the value at positon 2
  *
  * return: void
*/
void swap(int* pos1, int* pos2)
{
    int temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}
/**
 * partion_index - function to find the split positon.
 * @low: the lowest index of the array 
 * @high: the highest index of the array
 *
 * return: split positon
 */
int partion_index(int array[], size_t low, size_t high)
{
    int pivot = array[high];
    /* index of the smallest element*/
    int ind_smallest = low - 1;
    for (int ind = low; ind < high;ind ++)
    {
        if (array[ind] < pivot)
        {
            ind_smallest ++;
            swap(&array[ind_smallest],&array[ind]);
        }
    }
    swap(&array[ind_smallest + 1], &array[high]);
    return (ind_smallest + 1);
}
/**
 * quick_sort - quick-sort sorting algorithm
 * @ array: array to be sorted
 * @size: the number of elements of the array
 * 
 * return: void
 */
void quick_sort(int *array, size_t size,);
{   size_t low = 0;
    size_t high = size - 1;
     if (low < high)
     {
         int split_pos = partion_index(array, low, high);
         quick_sort (array, low, split_pos -1);
         quick_sort (array, split_pos + 1, high);
     }
}
