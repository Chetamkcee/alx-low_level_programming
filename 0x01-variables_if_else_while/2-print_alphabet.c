/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char alphabets;

	for (alphabets = 'A'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);

}
