#include "main.h"
/**
 * _strlen - find the length of a string
 * @s: string whose length is to be found
 * Return: returns the length of @s
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
