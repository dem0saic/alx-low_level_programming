#include <stdio.h>
#include <ctype.h>
/**
 * main - this is the main func
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num % 10 + '0');
	}
		putchar('\n');
		return (0);
}
