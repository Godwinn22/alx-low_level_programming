#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: the number of arguments that will be taken in
 * @separator: the string to be printed between numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i == 0)
			printf("%d", va_arg(ap, int));
		else if (!separator)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
