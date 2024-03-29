#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of elements in an array
 * @size: size of each element in an array
 * Return: pointer to allocated memory , NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/*set allocated memory to zero*/
	memset(ptr, 0, total_size);

	return (ptr);
}
