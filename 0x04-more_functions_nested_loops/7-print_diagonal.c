#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 * @n: length of the diagonal line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = i;

			while (j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
