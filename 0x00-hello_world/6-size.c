#include <stdio.h>
/**
 * main - A program to print size of different data types
 * Return:0 (Success)
 */
int main(void)
{
	char my_char;
	int my_int;
	long int my_lint;
	long long int ll;
	float my_float;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(my_char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(my_int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(my_lint));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(my_float));
	return (0);
}
