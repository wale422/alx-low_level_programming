#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A program to print positive,zero,or negativie
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
		printf("is greater than 5\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is less than 6 and not 0\n");
	return (0);
}
