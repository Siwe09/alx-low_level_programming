#include "main.h"

/**
 * _strlen - checks the length of a string.
 * @s: String to be checked
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int string_lenght = 0;

	while (s[string_lenght])
		string_lenght++;
	return (string_lenght);
}
