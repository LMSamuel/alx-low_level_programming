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
	int result = 48;
	char result1 = 'a';

	while (result < 58)
	{
		putchar(result);
		result++;
	}
	while (result1 <= 'f')
	{
		putchar(result1);
		result1++;
	}
	putchar('\n');
	return (0);
}
