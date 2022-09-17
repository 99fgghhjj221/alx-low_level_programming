/*
 * File: 8-print_base16.c
 * Auth: t prints all the numbers of base 16 in lowercase
 *
 */
#include <stdio.h>

/**
 * main - t prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;

	char hex = 'a';

	for (; i < 10; i++)
	{
		putchar(i + '0');
		i = i % 10;
	}
	for (; hex <= 'f'; hex++)
		putchar(hex);	
	putchar('\n');

	return (0);
}
