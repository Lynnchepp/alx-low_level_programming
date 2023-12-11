#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string of bytes to search for
 * Return: pointer to the bytes in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
