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
int partion_index(int *array, unsigned int low, unsigned int high)
{
    int pivot = array[high];
    printf("pivote is %d ", pivot); 
    /* index of the smallest element*/
    int ind_smallest = low - 1;
    unsigned int ind;
    for (ind = low; ind < high;ind++)
    {
        if (array[ind] > pivot)
        {  
            ind_smallest++;
            swap(&array[ind_smallest], &array[ind]);
        }
    }
    swap(&array[ind_smallest + 1], &array[high]);
    printf("partion index is %d  ", ind_smallest + 1);
    return (ind_smallest + 1);
}
/**
 * quick_sort_def - quick-sort sorting algorithm
 * @ array: array to be sorted
 * @size: the number of elements of the array
 * 
 * return: void
 */
void quick_sort_def(int *array, unsigned int low, unsigned int high)
{  
     if (low < high)
     {   
         int split_pos = partion_index(array, low, high);
	 printf("%d\n", split_pos);
         quick_sort_def (array, low, split_pos -1);
         quick_sort_def (array, split_pos + 1, high);
     }
}
/**
 *quick_sort - sorts an array in divid and conquor fashing.
 *@array: pointer to the array
 *@size: the size of the array
 *
 *return: void 
 */
void quick_sort(int *array, size_t size)
{
     int low = 0;
     unsigned int high = (unsigned int)(size - 1);
     printf("low and high %d and %d\n", low, high);
     quick_sort_def(array, low, high);

}
