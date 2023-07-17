#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return NULL;

	total_size =nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return NULL;
	memset(ptr, 0, total_ size);
	return ptr;
}
