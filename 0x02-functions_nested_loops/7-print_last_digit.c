#include "main.h"

/**
 * print_last_digit: prints the last digit of a number.
 * @n: the number whose last digit is to be obtained.
 * return - value of the last digit of variable n.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = 0 - last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
