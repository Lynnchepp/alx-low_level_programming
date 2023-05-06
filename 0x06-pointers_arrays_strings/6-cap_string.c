#include "main.h"
#include <stddef.h>
/**
 * cap_string - capitalizes all words in a string
 * @str: pointer to input string
 *
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
	int i;
	int cap_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		cap_next = 0;
		if (str[i] == ' ' ||
				str[i] == '\t' ||
				str[i] == '\n' ||
				str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}')
		{
			cap_next = 1;
		}
	}
	return (str);
}
