#include "main.h"

/**
 * print_alphabet- print alpha.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char result = 'a';
	int count = 0;
	
	while (count < 10)
	{
		while (result <= 'z')
		{
			_putchar(result);
			result++;
		}
		_putchar('\n');
		count++;
	}
}
