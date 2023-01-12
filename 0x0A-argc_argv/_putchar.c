#include <unistd.h>

/**
 * _putchar writes character c to stdio
 * Return: on success 1.
 * on error , -1 and error no is set properly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
