#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabet in lowercase 10 times
 * Return: 0 on success
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
