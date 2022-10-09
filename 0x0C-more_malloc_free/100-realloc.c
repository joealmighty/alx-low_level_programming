#include "main.h"
#include <stdlib.h>

/**
* _memcpy - copies memory.
*
* @dest: dest
* @src: string to copy
* @n: numbers of bytes to cop
*
* Return: char dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
* _realloc - create a new pointer of string that reallocates a memory block
*
* @ptr: old string
* @old_size: size of ptr
* @new_size: size for the new string from the pointer
*
* Return: void pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
