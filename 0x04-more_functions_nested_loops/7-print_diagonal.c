#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 *@n: length of the diagonal line
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\');
		n--;
	}
	_putchar('\n');
}
