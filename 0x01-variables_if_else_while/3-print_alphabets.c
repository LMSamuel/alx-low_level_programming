#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char result = 'a';

	while (result <= 'z')
	{
		putchar(result);
		result++;
	}

	for (result = 'A'; result <= 'Z'; result++)
		putchar(result);
	putchar('\n');
	return (0);
}
