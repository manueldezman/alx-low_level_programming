#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Return: Always(0)
 *
 *@c: the character to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
