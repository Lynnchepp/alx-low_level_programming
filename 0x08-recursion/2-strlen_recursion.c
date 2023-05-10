#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: A pointer to the string to find the length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
