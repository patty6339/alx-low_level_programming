#include "main.h"
/**
 * _memcpy - function to copy memory area
 *
 * @dest: destination to copy memory area
 * @src: where memory area is copied from
 * @n: memory area bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
