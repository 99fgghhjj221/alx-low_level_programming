/*
 * File: 2-print_alphabet_x10.c
 * Auth: Abir S
 *
 */
#include "main.h"

/**
 * void print_alphabet_x10 - it print alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;

	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
