#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive");
	esle if (n < 0)
		 printf("%d is negative");
	else
		 printf("%d is zero");
	return (0);
}
