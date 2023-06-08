#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number to change
 * @m: second number
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int current;
	int i, num = 0;

	for (i = 63; i >= 0; i--)
	{
		current = result >> i;
		if (current & 1)
			num++;
	}
	return (num);
}
