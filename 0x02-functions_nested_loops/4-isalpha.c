#include "main.h"

/**
 * _isalpha - check for alphabets
 *
 * Return: Always(0)
 *
 *@c: the character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
