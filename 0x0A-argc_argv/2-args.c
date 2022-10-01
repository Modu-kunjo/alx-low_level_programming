#include <stdio.h>

/**
 * main -  a program that print all arguements it recieves
 * @argc: the number of commad-line
 * @argv: an array of strings containing the commad-line
 * Return: return 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
