#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers
 * @argc: the number of commad-line arguements
 * @argv: an array of strings containing tha command-lines
 * Return: return 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Erro\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
			return (0);
}
