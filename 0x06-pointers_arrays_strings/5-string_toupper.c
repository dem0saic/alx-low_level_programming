#include "main.h"

/**
 * string_toupper - a function that change all lowercase to uppercase letters of a string.
 * @str : string to be changed.
 * Return: str.
 */
char *string_toupper(char *str)
{
	int alpha = 0;

	while (str[alpha] != '\0')
	{
		if (str[alpha] >= 'a' && str[alpha] <= 'z')
		{
			str[alpha] -= 32;
		}
		alpha++;
	}
	return (str);
}
