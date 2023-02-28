#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printed in reverse
 *
 * return: void
 */

void print_rev(char *s)
{
	int i;

	n =  strlen(s) - 1;
	for (i = n; i >= 0; i--)
		_putchar(s[i]);
	_putchar("\n");
}
