#include "main.h"

/**
 *
 */

int _printf(const char *format, ...)
{
	int char_count = 0; /* Total number of chars printed to stdout */
	va_list ap; /* Contains the list of arguments passed after format */
	int i; /* Used to loop through all characters in format */

	va_start(ap, format);

	for (i = 0; format != NULL && format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
			continue;
		}

		if (format[i + 1] == '\0')
		{
			_putchar('%');
			char_count++;
			break;
		}
		switch (format[i + 1])
		{
			case 'c':
				_putchar(va_arg(ap, int));
				char_count++;
				break;
			case 's':
				char_count += print_str(va_arg(ap, char*));
				break;
			default:
				char_count++;
				if (format[i + 1] == '%')
				{
					_putchar('%');
					i++;
					continue;
				}
				_putchar(format[i]);
				_putchar(format[i + 1]);
		}
		i++;
	}
	return (char_count);
}
