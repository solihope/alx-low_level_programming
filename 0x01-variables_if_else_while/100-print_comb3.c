#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = 0, e = 8, s1 = 1, e2 = 9, tmp = 1;

	while (s <= e)
	{
		s1 = tmp;

		while (s1 <= e2)
		{
			putchar(s + '0');
			putchar(s1 +'0');
			s1++;

			if (s != e)
			{
				putchar(',');
				putchar(' ');
			}

		}
		tmp++;
		s++;
	}

	putchar('\n');

	return (0);
}
