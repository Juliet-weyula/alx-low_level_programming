#include "main.h"

/**
 *print_alphabet - a function that prints alphabets, in lowercase
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar(\n);
}
