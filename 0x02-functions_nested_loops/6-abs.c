/*
 * File: 6-abs.c
 * Auth: Abir S
 */
#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @n: to be checked
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	if (n >= 0)
		return (n);

return (0);
}
