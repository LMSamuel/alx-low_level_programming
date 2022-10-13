#include <stdio.h>



/**
 * main - Entry point of code and printf
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char x;
	float y;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));
	return (0);
}
