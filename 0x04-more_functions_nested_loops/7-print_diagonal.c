#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times character should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}