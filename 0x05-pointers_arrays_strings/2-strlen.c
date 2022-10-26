#include "main.h"

/**
 * strlen - Return the length of a string.
 * @str: string.
 *
 * Return: Length
 */
size_t_strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
