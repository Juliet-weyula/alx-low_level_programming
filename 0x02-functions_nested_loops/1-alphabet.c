#include "main.h"

/**
 *print_alphabet - a function that prints alphabets, in lowercase
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar(\n);
}
