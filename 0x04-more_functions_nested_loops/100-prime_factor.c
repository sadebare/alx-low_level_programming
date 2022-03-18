#include <stdio.h>
/**
 * main - The prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i, num = 612852475143;
	for(i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}

