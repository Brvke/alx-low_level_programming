#include "main.h"
/**
 * main - entry point
 * @argc: count of argumrnts
 * @argv: array of argument strings
 * Return: 0 if suceccsfull
 */
int main(int argc, char *argv[])
{
	if (argv != NULL)
		printf("%d\n", (argc - 1));
	return (0);
}
