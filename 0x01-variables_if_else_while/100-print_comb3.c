#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print lower case alphabet in reverse
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9; i++)
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
				continue;
			else
				putchar(',');
			putchar(' ');
		}
	return (0);
}
