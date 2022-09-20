#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array fo integers
 * @a: int type array pointer
 * @n: int type of integer
 * Description: Number must be seperated by comma and space
 * you can only  use _putchar to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, n++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
