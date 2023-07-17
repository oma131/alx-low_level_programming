#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @ptr: A pointer to the memory previously allocated.
 * @new_size: The size in bytes for the new memory block.
 * @old_size: The size in bytes of the allocated space for ptr.
 *
 * Return: If new_size == old_size - ptr.
 * If new_size == 0 and ptr is not NULL - NULL.
 * Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == 0 && ptr != NULL) {
		free(ptr);
		return NULL;
	}

	if (ptr == NULL) {
	       return malloc(new_size);
	}

	if (new_size == old_size) {
		return ptr;
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return NULL;
	}

	copy_size = (old_size < new_size) ? old_size : new_size;
    	memcpy(new_ptr, ptr, copy_size);

   	 free(ptr);

    	return new_ptr;
}
