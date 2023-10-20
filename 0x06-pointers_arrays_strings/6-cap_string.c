#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int ghostshel = 0;

	while (str[ghostshel])
	{
		while (!(str[ghostshel] >= 'a' && str[ghostshel] <= 'z'))
			ghostshel++;

		if (str[ghostshel - 1] == ' ' ||
		    str[ghostshel - 1] == '\t' ||
		    str[ghostshel - 1] == '\n' ||
		    str[ghostshel - 1] == ',' ||
		    str[ghostshel - 1] == ';' ||
		    str[ghostshel - 1] == '.' ||
		    str[ghostshel - 1] == '!' ||
		    str[ghostshel - 1] == '?' ||
		    str[ghostshel - 1] == '"' ||
		    str[ghostshel - 1] == '(' ||
		    str[ghostshel - 1] == ')' ||
		    str[ghostshel - 1] == '{' ||
		    str[ghostshel - 1] == '}' ||
		    ghostshel == 0)
			str[ghostshel] -= 32;

		ghostshel++;
	}

	return (str);
}
