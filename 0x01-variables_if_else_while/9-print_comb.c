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
	int num;

	for (num = 0 ; num <= 9; num++)
	{
		putchar('0' + num);
		if (num == 9)
			continue;
		else
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
