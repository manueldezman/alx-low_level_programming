#include "main.h"

/**
 * factorial - a function that prints the factorial of a number
 *
 * @n: a number
 *
 * Return: the factorial of the number or -1 for error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
