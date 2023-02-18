#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A program to print numbers from 0 to 10
 * Return:Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
