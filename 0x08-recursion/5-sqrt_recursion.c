#include "main.h"

/**
 * _sqrt - a function that returns
 * the natural square root of a number.
 * @n: the number
 * @i: the initial guess
 * Return: the square root of n
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: the number
 * Return: the square root or -1 for error
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
