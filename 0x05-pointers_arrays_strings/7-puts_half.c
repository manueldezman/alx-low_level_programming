#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 *
 * @str: a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n, m, len;

	len = strlen(str);

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		m = n + 1;
	}
	else
	{
		m = len / 2;
	}

	while (m < len)
	{
		_putchar(str[m]);
		m++;
	}
}
