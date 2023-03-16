#include <stdlib.h>

/**
 * _calloc - a function that reserves memory for
 * an array
 *
 * @nmemb: number of elements in the array
 * @size: no of bytes of each elements
 *
 * Return: a pointer to the reserved memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, totalSize = nmemb * size;
	char *array;

	if (totalSize == 0)
		return (NULL);

	array = malloc(totalSize);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	return (array);
}
