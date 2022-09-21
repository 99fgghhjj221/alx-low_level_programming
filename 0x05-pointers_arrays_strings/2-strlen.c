/*
 * File: 2-strlen.c
 * Auth: Abir S
 */
#include "main.h"

/**
 * _strlen - PRINT THE LENGTH OF THE STRING
 * @s: string to be counted
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int c = 0;
	for (; *s != '\0'; s++)
	{
		c++;
	}
return (0);
}
