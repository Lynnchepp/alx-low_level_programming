#include "main.h"
#include <unistd.h>
/**
 * _putchar -whites the character c to stdout
 * @c: the character to print
 * Return: on success 1
 * on-error , - 1 is rturned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
