#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: the number of command-line arguments
 * @argv: the array containing the command-line arguments
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{

	(void)argc; /*unused parameter*/
	printf("%s\n", argv[0]);
	return (0);
}
