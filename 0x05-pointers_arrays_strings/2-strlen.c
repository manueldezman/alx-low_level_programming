#include "main.h"

/**
 * _strlen - prints the lenght of a string
 *
 * @s - a string
 *
 * return: lenght of string s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while ( s[i] != "\0")
		i++;
	return (i);
}

