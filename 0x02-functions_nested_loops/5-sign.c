#include "main.h"


/**
 * print_sign - Prints the sign of a number
 * description: function to check for an alphabet
 * @n: argument
 * Return: 0 if number is 0, 1 if positive,  else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
