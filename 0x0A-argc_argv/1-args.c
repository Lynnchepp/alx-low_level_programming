#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: the array of strings with the program
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
