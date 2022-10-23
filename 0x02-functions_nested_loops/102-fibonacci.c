#include "main.h"
#include <stdio.h>
/**
 * main - prints the n times table, starting with
 * Return: number of the times table
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1 ; i < 50 ; i++)
	{
		if (j != 2065011074)
		{
			printf("%ld, ",j);
		} else
		{
			printf("%ld\n, ",j);

		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
