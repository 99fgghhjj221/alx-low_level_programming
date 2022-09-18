/*
 * File: 9-print_comb.c
 * Auth: abir s
 */
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i + '0');
		i = i % 10;
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');

return (0);
}
