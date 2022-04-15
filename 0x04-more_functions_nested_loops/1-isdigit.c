#include "main.h"

/**
 * _isdigit - checks for digitss 0 to 9
 * Description: a  program that checks for digits
 *@c: the character to be checked
 * Return: 0 for non-zero to nine digits,
 * 1 for digits between 0 to 9;
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
