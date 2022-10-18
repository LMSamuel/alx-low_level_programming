#include "main.h" 

/**
 * main -prints a-z
 * number stored in the variable n
 * Return: Always 0 (Succes)
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
