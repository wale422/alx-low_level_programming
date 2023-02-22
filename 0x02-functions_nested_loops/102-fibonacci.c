#include <stdio.h>
/**
  * main - print first 50 fibonacci numbers.
  * Return: nothing.
  */
int main(void)
{
	int n = 50;
	int i;
	unsigned long int first_term = 1;
	unsigned long int second_term = 2;
	unsigned long int next_term = 0;

	for (i = 0 ; i < n; i++)
	{
		printf("%lu", first_term);
		if (!(i == (n-1)))
		{
			printf(", ");
		}
		next_term  = first_term + second_term;
		first_term = second_term;
		second_term = next_term;
		
	}
	printf("\n");
	return (0);
}

