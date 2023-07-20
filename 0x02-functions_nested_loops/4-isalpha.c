#include "main.h"


/**
 * _isalpha - checks for an alphabet
 * @c: parameter
 * Return: 1 if exists and is alphabet, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
