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
	char ch;
	char ch2;

	for (ch = 'a' ; ch <= 'z'; ch++)
		putchar(ch);
	for (ch2 = 'A' ; ch2 <= 'Z'; ch2++)
		putchar(ch2);
	putchar('\n');
	return (0);
}
