#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	int s = 0, e = 7, s2 = 1, e2 = 8, s3 = 2, e3 = 9;

	while (s <= e)
	{
		s2 = s + 1;
		while (s2 <= e2)
		{
			s3 = s2 + 1;
			while (s3 <= e3)
			{
				putchar(s + '0');
				putchar(s2 + '0');
				putchar(s3 + '0');

				if (s != e)
				{
					putchar(',');
					putchar(' ');
				}
				s3++;
			}
			s2++;
		}
		s++;
	}
	putchar('\n');

	return (0);
}
