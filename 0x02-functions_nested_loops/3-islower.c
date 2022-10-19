#include "main.h"
/**
 * _islower - check if character is lowercase or uppercase
 * @c: character to check if it is lowercase.
 * Return: 1 for lowercase. 0 if it is not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
