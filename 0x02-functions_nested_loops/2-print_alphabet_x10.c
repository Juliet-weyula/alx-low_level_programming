#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	int x, co;

	while (co < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		co++;
		_putchar('\n');
	}
}

