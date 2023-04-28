#include "main.h"
/**
 * isupper -uppercase letters
 * @c: char to check
 * checking for uppercase letters
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
