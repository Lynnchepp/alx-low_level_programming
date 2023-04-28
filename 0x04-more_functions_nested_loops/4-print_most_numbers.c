#include "main.h"
/**
 * print numbers:print most numbers
 * Description:-exclude numbers 2 and 4
 * Return: numbers 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	if (i == 2 || i == 4)
	{
		continue;
	}
	else
	{
		putchar(i = '0');
	}
	putchar('\n');
}
