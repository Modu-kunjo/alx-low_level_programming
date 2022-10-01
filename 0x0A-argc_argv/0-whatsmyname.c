#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: the number of command-line arguements
 * @argv: an array of strings containing the commad-line arguements
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
