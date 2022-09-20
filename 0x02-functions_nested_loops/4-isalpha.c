/*
 * File: 4-isalpha.c
 * Auth: Abir S
 */
#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: char to be cheaked
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);

return (0);
}
