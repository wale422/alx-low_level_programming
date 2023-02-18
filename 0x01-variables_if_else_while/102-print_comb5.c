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

	for (i = 0 ; i <= 99; i++)
	{
		for (j = i + 1 ; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if ((i / 10) == 9 && (i % 10) == 8 && (j / 10) == 9 && (j % 10) == 9)
				continue;
			else
				putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
