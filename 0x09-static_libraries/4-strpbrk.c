#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string containing bytes
 * @accept: contains bytes
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
