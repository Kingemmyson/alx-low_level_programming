#include "main.h"

/**
 * print_alphabelt - prints the alphabet in lowercase
 */

void print_alphabelt(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
