#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a: an array of integers to be reversed.
 * @n: The number of elements in the array.
 *Return: void
 */

void reverse_array(int *a, int n)

{
	int first_num;
	int sec_num;

	for (first_num = 0; first_num < n--; first_num++)
	{
		sec_num = a[first_num];
		a[first_num] = a[n];
		a[n] = sec_num;
	}
}
