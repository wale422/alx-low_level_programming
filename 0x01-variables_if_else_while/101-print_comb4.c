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
	int k;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = i ; j <= 9; j++)
			for (k = j ; k <= 9; k++)
		{
			if (i != j != k)
			{	putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i == 7 && j == 8 && k == 9)
					continue;
				else
					putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
