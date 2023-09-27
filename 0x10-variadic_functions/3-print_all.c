#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @args: a list of argument pointing to the
 * character to be printed.
 *
 * Return: Nothing
 */
void print_char(va_list args)
{
	char print = va_arg(args, int);

	printf("%c", print);
}

/**
 * print_int - prints an integer.
 *
 * @args: a list of argument pointing to the character
 * to be printed.
 *
 * Return: Nothing.
 */
void print_int(va_list args)
{
	int print = va_arg(args, int);

	printf("%d", print);
}

/**
 * print_float - prints a float
 *
 * @args: list of arguments pointing to the float
 * to be printed.
 *
 * Return: Nothing.
 */

void print_float(va_list args)
{
	float print = va_arg(args, double);

	printf("%f", print);
}

/**
 * print_string - prints a string.
 *
 * @args: list of arguments pointing to the string
 * to be printed.
 *
 * Return: Nothing.
 */

void print_string(va_list args)
{
	char *print = va_arg(args, char*);

	if (print == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", print);
}
/**
 * print_all - prints all arguments passed to the function.
 *
 * @format: the format of the argumets passed.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list vList;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(vList, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(vList);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(vList);
}
