#include "main.h"
/**
 * print_alphabet: print the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char ch;
	
	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
