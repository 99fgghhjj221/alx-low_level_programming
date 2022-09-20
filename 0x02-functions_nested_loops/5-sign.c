/*
 * File: 5-sign.c
 * Auth: Abir s
 */
#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: to be cecked
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
return (0);
}
