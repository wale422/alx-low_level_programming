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
	char ch = '';

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	return (0);
}
