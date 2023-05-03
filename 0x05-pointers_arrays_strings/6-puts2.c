#include "main.h"
/**
 * puts2 - function should print only one character out of the two
 * starting with the firdt one
 * @str: input
 * Return: no return
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int i = 0;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
