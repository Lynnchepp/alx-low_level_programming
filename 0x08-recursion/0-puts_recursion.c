#include "main.h"
/**
 * _puts_recursion - prints a string recursively
 * @s: the string to be printed
 * Return: always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
