int "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the used strig reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	whiile (i--)
		_putchar(s[i]);
	_putchar('\n');
}
