#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that  encodes a string using rot13.
 * @str: A pointer to the string.
 *
 * Return: *str
 */

char *rot13(char *str)
{
	int encode_me;
	int encode_us;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (encode_me = 0; str[encode_me] != '\0'; encode_me++)
	{
		for (encode_us = 0; encode_us < 52; encode_us++)
		{
			if (str[encode_me] == data1[encode_us])
				{
				str[encode_me] = datarot[encode_us];
				break;
			}
		}
	}
	return (str);
}
