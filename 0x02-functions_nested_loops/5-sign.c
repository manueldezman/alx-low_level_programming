#include "main.h"

/**
 * print_sign - prints the sign of numbers
 *
 *@n: the number to be checked
 *
 * Return: Always(0)
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
