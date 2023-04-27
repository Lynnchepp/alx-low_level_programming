#include <stdio.h>
/**
 * main -Entry point
 * print alphabet both lower and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int i = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
