#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 *
 * test_isalpha - Test the _isalpha function
 * @n: Number to pass to _isalpha function
 */
void test_isalpha(int n)
{
	int r;
	r = _isalpha(n);

	_putchar(r + '0');
	_putchar('\n');
}
/**
 * main - check for alphabetical characters
 *
 * Return: always 0 (success)
 */
int main(void)
{
	test_isalpha('H');
	return (0);
}
/**
 * main - check the sign of numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int r;
	
	r = print_sign(98);
	
	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
 * main - check for absolute value of an integer
 *
 * Return: always 0 
 */
int main(void)
{
	int r;
	r = _abs(-1);
	
	printf("%d\n", r);
	return (0);
}
/**
 * main - check the last digit of an integer
 *
 * Return: Always 0
 */
int main(void)
{
	int r;
	r = print_last_digit(98);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
/**
 * main - prints n times table
 *
 * Return: always 0
 */
int main(void)
{
	print_times_table(2);
	return (0);
}
/**
 * main - prints all natural numbers from n to 98
 *
 * Return: always 0
 */
int main(void)
{
	print_to_98(98);
	return (0);
}
/**
 * main - adds two integers and returns the result
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	n = add(89, 9)
		printf("%d\n", n);
	return (0);
}
/**
 * main - prints every minute of Jack Bauer
 *
 * Return: Always 0
 */
int main(void)
{
	jack_bauer();
	return (0);
}
/**
 * main - prints the 9 times table
 *
 * Return: Always 0
 */
int main(void)
{
	times_table();
	return (0);
}
