#include <stdio.h>
/**
 * main - print from 00 to 99
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (j == '9' && i == '9')
			{
				putchar('\n');
			}
			else
			{ 
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		if (j >= '9')
		{
			j = '0';
		}
		i++;
	}
	putchar('\n');
	return (0);
}
