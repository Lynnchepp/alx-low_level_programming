#include "main.h"
/**
 * strcpy - a function that copies the string pointed by src
 * @dest: Buffer to copy the string to
 * @src: to copy from
 * Return: pointer to dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
