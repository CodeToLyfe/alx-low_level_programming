#include <stdio.h>


/**
 * main - Entry point
 * Description - Print lowercase alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char alph;


	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
