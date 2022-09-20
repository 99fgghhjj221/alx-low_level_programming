/*
 * File: 3-islower.c
 * Auth: Abir S
 */
#include "main.h"

/**
 * _islower - PRINTS THE LOWER ONE
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

return (0);
}
