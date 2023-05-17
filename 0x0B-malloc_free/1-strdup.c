#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * _strdup - returns a pointer to a newly allocated space in memory which
 *           contains a copy of the string given as a parameter.
 * @str:string to duplicate
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 *         was available or str is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, f = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (f = 0; str[f]; f++)
		duplicate[f] = str[f];
	return (duplicate);
}
