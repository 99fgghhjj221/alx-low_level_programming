/*
 * File: 7-print_last_digit.c
 * Auth: Abir s
 */
#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 * @n: number to be cheaked
 *
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

return (last);
}
