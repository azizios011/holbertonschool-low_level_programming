#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints any combination of c, i, f, s arguments
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0, sep = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				sep = 1;
				break;
		}
		if (format[i + 1] && !sep)
			printf(", ");
		sep = 0;
		i++;
	}

	printf("\n");
	va_end(args);
}
