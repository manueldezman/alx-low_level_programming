#include "main.h"

/**
 * _abs - prints the absolute  value of a number
 *
 *@r: the number to be printed
 *
 * Return: Always(0)
 */

int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
