#include "main.h"

/**
 * print_alphabet- print alpha.
 * Return: Always 0.
 */
void print_alphabet(void)
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
		count++;
	}
	_putchar('\n');
}
