#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: size of the memory to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
