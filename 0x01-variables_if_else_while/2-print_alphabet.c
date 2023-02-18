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
	char ch = '\0';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch + '\0');
	}
	return (0);
}
