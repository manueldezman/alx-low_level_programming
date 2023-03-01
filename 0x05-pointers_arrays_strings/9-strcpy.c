#include "main.h"
#include <string>

/**
 * *_strcpy - a function that copies the string pointed to by src to dest
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;
	len = strlen(src);

	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
