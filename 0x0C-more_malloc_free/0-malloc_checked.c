#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocaated
 * Return: pointer to the allocated memory ,
 * if it fails it terminates with the status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}
