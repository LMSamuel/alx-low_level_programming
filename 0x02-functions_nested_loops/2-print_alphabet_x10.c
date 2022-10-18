#include "main.h"

/**
 * print_alphabet_x10- print alpha.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count = 0;	
	while (count < 10)
	{
		char result = 'a';

		while (result <= 'z')
		{
			_putchar(result);
			result++;
		}
		_putchar('\n');
		count++;
	}
}
