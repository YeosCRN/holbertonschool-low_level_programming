#include "variadic_functions.h"
/**
 * asdadasds
 */
void print_all(const char *const format, ...)
{
	va_list things_to_prints;
	int i = 0;

	va_start(thins_to_print, format);

	while (format[i]) 
	{
		if (format[i] == 'c')
			printf('%c', va_arg(things_to_print, int));
		if (format[i] == 'i')
			printf('%d', va_arg(things_to_print, int));
		if (format[i] == 'f')
			printf('%f', va_arg(things_to_print, double));
		if (format[i] == 's')
			printf('%s', va_arg(things_to_print, char *));
		i++;
	}
	va_end(things_to_print);
	printf("\n");
}
