#include "main.h"
/**
 * strcpy - a function that copies the string pointed by src
 * @dest: Buffer to copy the string to
 * @src: string to be coppied
 * Return: pointer to dest string
 */
char *_strcpy(char *dest, char *src)
{
	int 1 = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		1++;
	}
	for (; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
