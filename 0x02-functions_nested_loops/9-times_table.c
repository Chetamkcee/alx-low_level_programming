#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
	int main(void)
{
	int a;
	int b;
	int result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++);
		{
			result = a * b;
			putchar((result / 10) + '0');
			putchar((result % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
			putchar('\n');
}
