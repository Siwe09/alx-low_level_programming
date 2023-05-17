#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 * @s1: input
 * @s2: input
 * Return: if NULL is passed, treat it as an empty string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, n = 0, b = 0, z = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[n])
		n++;

	z = i + n;
	s = malloc((sizeof(char) * z) + 1);

	if (s == NULL)
		return (NULL);

	n = 0;
	while (b < z)
	{
		if (b <= i)
			s[b] = s1[b];

		if (b >= i)
		{
			s[b] = s2[n];
			n++;
		}
		b++;
	}
	s[b] = '\0';
	return (s);
}
