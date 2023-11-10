#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @n: the number of arguments that will be taken in
 * @separator: the string to be printed between strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "nil";
		if (separator && i == 0)
			printf("%s", str);
		else if (separator == NULL)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ap);
}
