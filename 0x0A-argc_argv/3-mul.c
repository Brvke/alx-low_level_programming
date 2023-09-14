#include "main.h"

/**
 * main - Entry point for the program
 *
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: result
*/
int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
