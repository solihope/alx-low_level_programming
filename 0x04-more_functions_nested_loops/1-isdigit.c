#include "main.h"
/**
 * _isdigit - function that verifies if a character is a digit or
 * not
 * Return: returns 1 if its uppercase , 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
