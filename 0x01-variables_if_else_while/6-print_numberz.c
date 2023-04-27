#include <stdio.h>
/**
 * main -Print numbers 0 to 9 using putchar
 * Return: o (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
