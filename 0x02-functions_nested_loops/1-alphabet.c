#include "main.h"

/**
 * Description: a program that prints alphabets
 * print_alphabet: a program that prints lowercase alphabets
 * followed by new line
 * Return: always 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
