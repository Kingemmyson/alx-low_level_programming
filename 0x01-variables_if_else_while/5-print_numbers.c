#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints digits 0 to 9 of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
