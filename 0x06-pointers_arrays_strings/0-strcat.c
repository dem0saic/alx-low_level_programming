#include "main.h"
/**
 * _strcat - function name
 * @dest - parameter one
 * @src - parameter two
 *Return: dest
 */

 char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int number_oftimes;

	for (number_oftimes = 0; dest[number_oftimes] != '\0'; number_oftimes++)
		destlen++;
	for (number_oftimes = 0; src[number_oftimes] != '\0'; number_oftimes++)
		srclen++;
	for (number_oftimes = 0; number_oftimes <= srclen; number_oftimes++)
	{
		dest[destlen + number_oftimes] = src[number_oftimes];
	}
	return (dest);
}
