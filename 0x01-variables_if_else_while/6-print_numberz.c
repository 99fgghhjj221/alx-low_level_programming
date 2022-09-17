/*
 * File: 6-print_numberz.c
 * Auth: Brennan D Baraban
 *
 */
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		putchar(a + '0');
		a = a % 10;
	}
	putchar('\n');

	return (0);
}
