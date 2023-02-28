#include "main.h"

/**
 * _puts - prints a string
 *
 * @s - string to be printed
 *
 * return: void
 */

void _puts(char *str)
{
	
	int i;

	i = 0;

	while (str + i != "\0")
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar("\n");
}
