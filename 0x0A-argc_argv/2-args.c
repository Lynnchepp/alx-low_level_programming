#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments passed to the programe
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
