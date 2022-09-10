#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: print all possible combination of 2-digit number
 * Return: Always 0 (success)
 */
int maint(void)
{
	int c, i, k, j;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; k++)
				{
					if (((k + j) > (c + i) && k >= c) || c < k)
					{
						putchar(c);
						putcahr(i);
						putchar(' ');
						putchar(k);
						putchar(k);

						if (c + i + k + j == 227 && c == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
