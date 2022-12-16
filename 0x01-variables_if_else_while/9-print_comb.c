#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints all possible combos of single-digit numbers
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
