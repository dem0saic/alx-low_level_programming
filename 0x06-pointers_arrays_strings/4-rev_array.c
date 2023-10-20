#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a: an array of integers to be reversed.
 * @n: The number of elements in the array.
 *Return: void
 */

void reverse_array(int *a, int n)

{
	int num1;
	int num2;

	for (num1 = 0; num1 < n--; num1++)
	{
		num2 = a[num1];
		a[num1] = a[n];
		a[n] = num2;
	}
}
