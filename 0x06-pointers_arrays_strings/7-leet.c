#include "main.h"

/**
 * leet - a function that encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int encoder1, encoder2;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (encoder1 = 0; str[encoder1] != '\0'; encoder1++)
	{
	for (encoder2 = 0; encoder2 < 10; encoder2++)
		{
		if (str[encoder1] == s1[encoder2])
			{
			str[encoder1] = s2[encoder2];
			}
		}
	}
	return (str);
}
