#include "main.h"
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
