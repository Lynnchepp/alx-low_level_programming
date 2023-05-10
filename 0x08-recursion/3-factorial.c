#include "main.h"
/**
 * factorial - return the factorial of a number given
 * @n: the number to compute the factorial of
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
