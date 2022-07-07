#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, n = 612852475143;
	int max = -1;


	while(n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i < 782849; i = i + 2)
	{
		while (n % i == 0)
			max = i;
			n = n / i;
	}

	if (n > 2)
	{
		max = n;
	}

	printf("%lu\n", n);

	return (0);
}
