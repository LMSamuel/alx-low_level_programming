#include "main.h"

/**
 * print_alphabet- print alpha.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char result = 'a';

	while (result <= 'z')
	{
		_putchar(result);
		result++;
	}

	_putchar('\n');
}
