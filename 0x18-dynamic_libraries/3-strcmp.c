#include "main.h"
/**
 * _strcmp - a function to compare strings
 *
 * @s1: the first string
 * @s2: second string
 * Return: integers
 */
int _strcmp(char *s1, char *s2)
{
	int i, x;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		x = 0;
	}
	else
	{
		x = s1[i] - s2[i];
	}
	return (x);
}
