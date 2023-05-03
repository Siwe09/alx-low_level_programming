#include "main.h"

/**
 * _puts - Function that prints a string
 * @str:- pointer to a string
 * Return: String and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
