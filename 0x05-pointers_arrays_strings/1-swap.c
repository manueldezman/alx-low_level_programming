#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a - first number
 * @b - second number to be swapped
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*b = *a;
	*a = t;
}
