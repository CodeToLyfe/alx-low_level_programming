#include "main.h"

/**
 * _islower - checks for lowercase alphabet 
 * Return: 1 if exists and is lowercase, else 0
 */
void _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
