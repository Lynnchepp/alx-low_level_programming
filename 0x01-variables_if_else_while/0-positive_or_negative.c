#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Determine whether the number is positive, negative or zero
 * Return: always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%dis negative\n", n);
	}
	return (0);
}

