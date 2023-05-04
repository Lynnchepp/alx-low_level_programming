#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1] == 't' ||
				str[index - 1] == '\n' ||
				srt[index - 1] == ',' ||
				str[index - 1] == '.' ||
				str[index - 1] == ';' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				srt[index - 1] == '"' ||
				index == o)
			str[index] -= 32;
		index++;
	}
	return (str);
}
