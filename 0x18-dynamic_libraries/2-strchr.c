#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to find
 * Return: pointer to the first occurence of c in s,NULL if not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
