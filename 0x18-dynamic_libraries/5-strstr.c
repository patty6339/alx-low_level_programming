#include "main.h"
/**
 * _strstr - a function to locate a substring
 *
 * @haystack: is the string from where to locate
 * @needle: is the substring to locate
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	int s = 0;

	while (needle[s] != '\0')
	{
		s++;
	}
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != s)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}
