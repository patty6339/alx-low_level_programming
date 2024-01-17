#include "main.h"
/**
 * _memset - function to fill memory with a constant byte
 *
 * @s: pointer to memory
 * @b: constant byte
 * @n: bytes of the memory
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
