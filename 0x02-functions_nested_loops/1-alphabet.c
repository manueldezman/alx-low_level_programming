#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet,
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{

	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
