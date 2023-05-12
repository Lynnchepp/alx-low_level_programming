#include "main.h"
/**
 * _isdigit -check if digits are 0 to 9
 * @c: char ro be checked
 * Return: 1 for charater otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
