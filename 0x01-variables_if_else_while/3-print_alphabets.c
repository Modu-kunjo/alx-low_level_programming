#include <stdio.h>
#include <unistd.h>
/**
 * main - program startimg point
 * Description: Program for printing lower and uppercase alphabet
 * Return: Alaways 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
