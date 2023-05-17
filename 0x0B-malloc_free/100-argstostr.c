#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: argument count
 * @av:argument vector
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, n = 0, p = 0, q = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (n < ac)
	{
		while (av[n][p])
		{
			ch++;
			p++;
		}

		p = 0;
		n++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	n = 0;
	while (av[n])
	{
		while (av[n][p])
		{
			s[q] = av[n][p];
			q++;
			p++;
		}

		s[q] = '\n';

		p = 0;
		q++;
		n++;
	}

	q++;
	s[q] = '\0';
	return (s);
}
