#include "main.h"

/**
 * print_chessboard - prints the chess board
 * @a: input pointer
 * Return: return nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; i < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
