#include "main.h"

/**
 * strlen - Returns the length of a string.
 * @str: string
 *
 * Return: Length of the stringg
 */
int size_t_strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
