#include "main.h"
/**
 * print_alphabet function - prints alphabet in lowercase
 * followed by a new line
 * 
 * Description - prints alphabet in lowercase
 */
void print_alphabet(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
