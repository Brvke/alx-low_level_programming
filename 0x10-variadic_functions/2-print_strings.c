#include "variadic_functions.h"
/**
 * print_strings - prints variable strings separated with separator
 *
 * @separator: separates the printed int
 * @n: count of variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *j;

	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		j = va_arg(arg, char*);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
