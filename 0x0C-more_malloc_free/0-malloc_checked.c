#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 *
 * @b: size of memory to be allocated
 *
 * Return: 98 for error or a pointer to the reserved memory
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
