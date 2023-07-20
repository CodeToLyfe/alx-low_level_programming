#include "main.h"


/**
 * print_last_digit  - Prints the last digit of a number
 * @num: argument
 * Return: Last digit of a number
 */
int print_last_digit(int num)
{
	int result;

	result = num % 10;
	if (result < 0)
		result = -result;
	_putchar('0' + result);
	return (result);
}
