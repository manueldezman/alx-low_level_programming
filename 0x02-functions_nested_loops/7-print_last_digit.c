#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: Always(0)
 *
 *@n: the original number
 *
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = 0 - i;
	_putchar(i + '0');
	return (i);
}
