#include <stdio.h>
/**
 *  *  *  * main - entry point
 *   *   *   *
 *    *    *    * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
	for (j = i + 1; j <= 57; j++)
	{
		putchar(i);
		putchar(j);
		if (i == 56 && j == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
		return (0);
}
