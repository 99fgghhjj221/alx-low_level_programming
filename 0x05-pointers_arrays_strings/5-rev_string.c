/*
 * File: 5-rev_string.c
 * Auth: Abir 
 */
#include "main.h"

/**
 * rev_string - REverse string
 * @s: to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c, k, i;

	char *a, aux;

	a=s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c/2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
