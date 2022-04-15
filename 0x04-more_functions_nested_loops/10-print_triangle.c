#include "main.h"

/**
 * print_triangle - prints triangle of size size
 * @size: length of triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j > size; j++)
		{
			if (size - j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
