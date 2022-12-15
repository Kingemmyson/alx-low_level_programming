#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	c = 'A';
	while
		(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(c <= 'Z')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
