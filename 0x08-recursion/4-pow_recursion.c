#include "main.h"

/**
 * _pow_recursion - a fuction used to print the power of a number
 *
 * @x: a number
 *
 * @y: the power of x
 *
 * Return: value of x raised to power of y
 */

int  _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
