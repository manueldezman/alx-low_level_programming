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

void print_array(char *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%c, ", a[i]);
		i++;
	}
	printf("\n");
}
