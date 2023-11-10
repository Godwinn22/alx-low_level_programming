#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *str;
	char *sep = "";

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			default:
				i++;
				continue;
			}
			i++;
			sep = ", ";
			va_end(ap);
		}
		printf("\n");
	}
}
