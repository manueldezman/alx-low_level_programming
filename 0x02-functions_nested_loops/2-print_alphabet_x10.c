#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10x
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void);
{
	int i = 97;
	int j = 0;

	while (j < 10)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
	j++;
	}

}
