#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: Concatenation parameter one.
 * @src: Concatenation parameter two.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[srclen] != '\0')
	{
		dest[destlen] = src[srclen];
		destlen++;
		srclen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
