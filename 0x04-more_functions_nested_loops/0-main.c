#include "main.h"
#include <stdio.h>
/**
 * main - checks for uppercase character
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

       	c = 'A';
	
	printf("%c: %d\n", c, _isupper(c));
	
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
/**
 * main - checks for a digit from 0 through 9
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	
	c = '0';
	
	printf("%c: %d\n", c, _isdigit(c));
	
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
