#include "main.h"
#include <stdio.h>
/**
 * main - prints the n times table, starting with
 * Return: number of the times table
 */
int main(void)
{
	int i;
	
	unsigned long int j, k, next, sum;

	j = 1;

	k = 2;

	sum = 0;

	for (i = 1 ; i <= 33; ++i)
	{
		if (j != 4000000 && (j % 2) == 0)
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
