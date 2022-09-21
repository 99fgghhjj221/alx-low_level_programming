/*
 * File: 4-print_rev.c
 * Auth: Abir
 */
#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string tobe printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c>= 0; c--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
