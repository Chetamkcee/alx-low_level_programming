#include <stdio.h>
/**
 *  * main - entry point
 *   *
 *    * Return: always 0 (success)
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		if (lower_case == 'e')
		{
			continue;
		}
		else if (lower_case == 'q')
		{
			continue;
		}
		putchar(lower_case);
	}
		putchar('\n');
		return (0);
}
