#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *main-Entrypoint
 *
 *Return:Always0 (Success)
 */
int main(void)
{
	char low;
	
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
