7-puts_half.c#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to be printed
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculate the starting point for the second half */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2 + 1;
	}

	/* Print the second half of the string */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
