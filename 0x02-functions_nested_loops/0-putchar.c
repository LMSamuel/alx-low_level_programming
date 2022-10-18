#include "main.h"
/**
 * main - prints _putchar
 * number stored in the variable n
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
