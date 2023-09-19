#include "variadic_functions.h"
/**
 * print_numbers - prints variable int separated with separator
 *
 * @separator: separates the printed int
 * @n: count of variable funciton
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int j;

	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		j = va_arg(arg, int);
		printf("%d", j);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
