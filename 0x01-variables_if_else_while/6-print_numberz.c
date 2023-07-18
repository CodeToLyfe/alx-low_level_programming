#include <stdio.h>


/**
 * main - Entry point
 * Description - Print digits 0 - 9
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 27; num <= 36; num++)
		printf((char)num);
	putchar('\n');
	return (0);
}
