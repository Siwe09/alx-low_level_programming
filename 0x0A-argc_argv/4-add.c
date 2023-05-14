#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry oint
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int b;
	unsigned int n, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (b = 1; b < argc; b++)
		{
			a = argv[b];

			for (n = 0; n < strlen(a); n++)
			{
				if (a[n] < 48 || a[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(a);
			a++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
