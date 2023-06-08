#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the binary number to print
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int index;

	for (i = 63; i >= 0; i--)
	{
		index = n >> i;

		if (index & 1)
		{
			_putchar('1');
			num++;

		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
