#include 'main.h"
/**
 * print lines: draw diagonal lines in the terminal
 * @n: number of lines to be drawn
 * Return: Empty
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}

