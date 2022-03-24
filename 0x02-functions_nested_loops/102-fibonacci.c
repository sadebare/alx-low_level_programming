#include <stdio.h>
/**
 * main - print out frst 50 fibonacci numbers;
 *
 * Return: Always 0 (Success);
 */
int main(void)
{
	int i;
	int a = 0;
	int b = 1;
	int c = a + b;

	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", c);
		a = b;
		b = c;
		c = a + b;
	}

	return (0);
}