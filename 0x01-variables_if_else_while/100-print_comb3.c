#include <stdio.h>


/**
 * main - Entry point
 * Description - Print combos of two numbers
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 38; num1 <= 46; num1++)
	{
		for (num2 = num1 + 1; num2 <= 47; num2++)
		{
			putchar((char)num1);
			putchar((char)num2);
			if (num1 != 46)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('\n');
		return (0);
}