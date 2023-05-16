#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: new string
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	size_t len = strlen(str) + 1;
	char *new_str = malloc(len);
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);

	s = _strdup(NULL);
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (char*) 1;
	}
	free(s);
	return (0);
}
