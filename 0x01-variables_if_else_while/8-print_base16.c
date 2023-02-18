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
	char c;
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	for (c = 'a' ; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
