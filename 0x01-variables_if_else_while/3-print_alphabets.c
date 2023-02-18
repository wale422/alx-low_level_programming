#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A program to print alphabet in lowercase using putchar
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char ch2 = 'A';

	for ( ; ch <= 'z'; ch++)
		putchar(ch);
	for ( ; ch2 <= 'Z'; ch2++)
		putchar(ch);
	putchar('\n');
	return (0);
}
