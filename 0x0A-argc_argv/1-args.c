#include <stdio.h>

/**
 * main - a program that prints the number of arguements pass into it
 * @argc: the number of command-line arguements
 * @argv: an array of strings containing the comman-line arguements 
 * Return: return 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\d", argc - 1);
	return (0);
}
