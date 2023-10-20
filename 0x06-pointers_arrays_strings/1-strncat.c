#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: Concatenation of parameter one
 * @src: Concatenation of parameter two
 * @n:fuction parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[srclen] != '\0' && srclen < n)
	{
		dest[destlen] = src[srclen];
		destlen++;
		srclen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
