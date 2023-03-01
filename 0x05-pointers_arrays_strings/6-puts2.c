#include "main.h"
#include <string.h>

/**
 * puts2 - prints a character of a string and skip the next one
 *
 * @str: a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, n;

	i = 0;
	n = strlen(str);

	while (i < n)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
