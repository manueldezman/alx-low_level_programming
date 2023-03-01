#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements of an array
 *
 * @a: a array
 *
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, m;

	i = 0;
	m = n - 1;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < m)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	printf("\n");
}
