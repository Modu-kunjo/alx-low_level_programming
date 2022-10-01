#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make changes
 * @argc: the number of command-line
 * @argv: an array of strings that contain the command-line arguements
 * Return: return 0 (success)
 */
int main(int argc, char *argv[])
{
	int cents;
	int quarters_25, dimes_10, nickels_5, coin_2, pennies_1;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quarters_25 = cents / 25;
	cents = cents - (quarters_25 * 25);

	dimes_10 = cents / 10;
	cents = cents - (dimes_10 * 10);

	nickels_5 = cents / 5;
	cents = cents - (nickels_5 * 5);

	coin_2 = cents / 2;
	cents = cents - (coin_2 * 2);

	pennies_1 = cents / 1;

	change = quarters_25 + dimes_10 + nickels_5 + coin_2 + pennies_1;
	return (0);
}
