#include "main.h"
/**
 * more_numbers -print 10 times the numbers 0 to 14
 * Return: 10 times to the numbers 0 up to 14
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	for (y = 0; y <= 14; y++)
		if (y < 9)
		{
			putchar((y / 10) + '0');
		}
	{
		putchar((y % 10) + '0');
	}
	putchar('\n');
}
