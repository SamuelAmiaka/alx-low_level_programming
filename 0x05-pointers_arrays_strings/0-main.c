#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - takes pointer to int and resets it to 98
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
/**
 * _atoi - converts a string to an integer
 *
 * Return: always 0
 */
int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98")
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
/**
 * swap_int - swaps the value of two integers
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
/**
 * _strlen - returns length of string
 *
 * Return: always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	char *str;
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
/**
 * *_strcpy - copies the string pointed to by src
 *
 * Return: always 0
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
/**
 * print_array - prints n elements of an array of integers
 *
 * Return: always 0
 */
int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
/**
 * puts_half - prints half of a string
 *
 * Return: always 0
 */
int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	return (0);
}
/**
 * puts2 - print one character out of 2 of a tring
 *
 * Return: always 0
 */
int main(void)
{
	char *str
	
	str = "0123456789";
	puts2(str);
	return (0);
}
/**
 * rev_string - reverses a string
 *
 * Return: always 0
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
/**
 * _puts - prints a string to stdout
 *
 * Return: always 0
 */
int main(void)
{
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	return (0);
}
