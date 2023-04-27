#include <stdio.h>
/**
 * main -print alphabets in reverse order using putchar
 * Return: o (success)
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
