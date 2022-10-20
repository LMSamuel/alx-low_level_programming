#include "main.h"

/**
 * print_sign- print 1 if alpha else print 0.
 * @n: char to check
 * Return: Always 1 else 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	} else if (n == 0)
	{
		_putchar(48);
		return 0;
	} else if (n < 0)
	{
		_putchar('-');
	}
	return -1;
}
