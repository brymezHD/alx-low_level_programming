#include "main.h"
/**
 * _memcpy - this copies memory area,
 * @dest: here is destination memory area.
 * @src: here is source memory area.
 * @n: bytes filled.
 * Return: the pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
