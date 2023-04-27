#include <stdio.h>
/**
 * main -Printnumbers of base 16 using putchar
 * Return: o (success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
