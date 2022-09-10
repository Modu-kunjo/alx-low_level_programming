#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numsber
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d = c;

	while (d <= '0')
	{
		putchar(d);
		d++
	}
	for (c + 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
