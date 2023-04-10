#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - check the code
 * @format :  is a list of types of arguments passed to the function
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	const char* p = format;
	va_list args;
	int i_arg;
	char c_arg;
	float f_arg;
	char* s_arg;

	va_start(args, format);
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'i':
			i_arg = va_arg(args, int);
			printf("%d", i_arg);
			break;
			case 'c':
			c_arg = (char) va_arg(args, int);
			printf("%c", c_arg);
			break;
			case 'f':
			f_arg = (float) va_arg(args, double);
			printf("%f", f_arg);
			break;
			case 's':
			s_arg = va_arg(args, char*);
			if (s_arg == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s_arg);
			}
			break;
		}
		p++;
		if (*p != '\0')
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
