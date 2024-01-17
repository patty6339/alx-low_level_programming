#include "main.h"
/**
 * Description: main - checks for a digit through 9.
 *
 * Return: 1 if is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
