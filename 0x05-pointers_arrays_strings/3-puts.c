#include "main.h"

/**
 * _puts - prints a string followed by a line,
 * @str: pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{

	int i = 0;

	while (str[0])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
