#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number whose last digit is to be printed
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return ((n % 10) + '0');

}
