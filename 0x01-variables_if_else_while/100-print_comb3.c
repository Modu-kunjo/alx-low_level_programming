#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Description: prints two digits combinations
 * Return: always 0 (success)
 */
int main(void)
{
	int c, i;

		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
}	