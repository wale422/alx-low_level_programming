#include <stdio.h>
/**
  * main - find and print sum of even valued terms
  * Return: nothing.
  */
int main(void)
{
	int n = 50;
	int i;
	unsigned long int first_term = 1;
	unsigned long int second_term = 2;
	unsigned long int next_term = 0;
	unsigned long int max_term = 4000000;
	unsigned long int sum = 0;

	for (i = 0 ; i < n; i++)
	{
		if ((first_term % 2 == 0) && (first_term < max_term))
		{
			sum += first_term;
		}
		next_term  = first_term + second_term;
		first_term = second_term;
		second_term = next_term;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}

