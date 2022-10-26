  1 #include "main.h"
  2 
  3 /**
  4  * _puts - prints a string to stdout
  5  * @str: pointer to the string to print
  6  */
  7 void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
