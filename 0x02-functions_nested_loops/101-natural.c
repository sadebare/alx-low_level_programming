#include <stdio.h>
/**
 * main - prints the sum of the multiples of 3 amd 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		printf("%d\n", sum);
	}

	return (0);
}
