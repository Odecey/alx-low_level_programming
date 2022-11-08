#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars,
 * and initialize it with a specific char.
 * @c: char to initialize
 * @s: number of bytes to allocate
 *
 * Return: a pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *cr = malloc(size);

	if (size == 0 || cr == 0)
		return (NULL);
	while (size--)
		cr[size] = c;
	return (cr);
}
