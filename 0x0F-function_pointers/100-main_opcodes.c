#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcode.
 *
 * @argc: number of arguments passed.
 * @argv: the arguemets passed to the main func.
 *
 * Return: Always success(0).
 */

int main(int argc, char *argv[])
{
	int nBytes, i;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error");
		exit(1);
	}

	nBytes = atoi(argv[1]);

	if (nBytes < 0)
	{
		printf("Error");
		exit(2);
	}

	for (i = 0; i < nBytes; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != nBytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
