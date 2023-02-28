#include "main.h"
#include <string.h>

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
	int n;

	n =  strlen(s) - 1;
	for (i = n; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
