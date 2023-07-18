#include <stdio.h>


/**
 * main - Entry point
 * Description - Print alphabets in descending order
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
