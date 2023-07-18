#include <stdio.h>


/**
 * main - Entry point
 * Description - Print all except
 * Return: 0 (success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'e' || alph == 'q')
			continue;
		putchar(alph);
	}
	putchar('\n');
	return (0);

}
