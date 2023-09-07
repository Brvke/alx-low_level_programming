#include "main.h"
/**
 * main - entry point of program
 * @argc: count of arguments
 * @argv: string of arguments
 * Return: alwasys return 0 if sucessfull
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
