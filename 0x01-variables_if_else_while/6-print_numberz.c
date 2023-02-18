#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A program to print single digit numbers 0 to 9 using puts
 * Return:Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0 ; number < 10; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
