#include "main.h"

/**
 * Return: length ofa string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}	
