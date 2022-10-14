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

	while (result < 58)
	{
		int result1 = 48; 

		while (result1 < 58)
		{
		
			putchar(result);
			putchar(result1);
			if (result != 57 || result1 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		result1++;
		}
	result++;
	}
	putchar('\n');
	return (0);
}
