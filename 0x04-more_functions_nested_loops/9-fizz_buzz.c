#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 100;
	int i = 1;

	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
		printf("FizzBuzz ");

		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
				printf("\n");
			}
		}

		else if (i % 3 == 0)
		printf("Fizz ");

		else
		printf("%d ", i);
	}
return (0);
}
