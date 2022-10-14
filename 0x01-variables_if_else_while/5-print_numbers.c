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
	int result=0;

	while (result < 10)
	{
		printf("%d", result);
		result++;
	}
	putchar('\n');
	return (0);
}
