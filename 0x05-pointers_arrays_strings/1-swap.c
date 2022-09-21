/*
 * File: 1-swap.c
 * Auth: Abir S
 */
#include "main.h"

/**
 * swap_int - swaping the pointers
 * @a: pointer to be swapped
 * @b: pointer to be swaped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int beb;

	beb = *a;
	*a = *b;
	*b = beb;
}
