#include <stdio.h>
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @n: number of bytes to be copied
 * @src: source memory area
 * @dest: destination memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
