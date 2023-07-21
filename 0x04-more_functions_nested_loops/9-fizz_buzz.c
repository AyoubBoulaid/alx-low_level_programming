#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, replacing mults of three with "Fizz",
 *        mults of five with "Buzz", and mults of both three and five
 *        with "FizzBuzz".
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
