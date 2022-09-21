/*
 * File: 3-puts.c
 * Auth: IR
 */
#include "main.h"

/**
 * _puts - prints string
 * @str: to be printed
 *
 * Return: return void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
