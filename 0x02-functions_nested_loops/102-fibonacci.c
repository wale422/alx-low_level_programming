#include <stdio.h>
/**
  * main - print first 50 fibonacci numbers.
  * Return: nothing.
  */
int main(void)
{
	int n = 50;
	unsigned long int first_term = 1;
	unsigned long int second_term = 2;
	unsigned long int next_term = 0;
	

	while (n > 0 )
	{
		printf("%lu, \n",first_term);
		next_term  = first_term + second_term;
		first_term = second_term;
		second_term = next_term;
		n--;
	}
	printf("\n");
	return (0);
}

