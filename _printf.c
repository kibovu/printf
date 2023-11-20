#include "main.h"

/**
  * _printf - printf function
  *@format: string
  *
  *Return: length of output
  */

int _printf(const char *format, ...)
{
	int counter = 0;
	char *string;
	va_list denno;

	if (format == NULL)
		return (0);
	va_start(denno, format);
	while (*format)
	{
		if (*format != '%')
			counter += print_char(*format);
		else
		{
			format++;
			if (*format == '%')
				counter += print_char('%');
			else if (*format == 'c')
				counter += print_char(va_arg(denno, int));
			else if (*format == 's')
			{
				string = va_arg(denno, char *);
				counter += print_str(string);
			}
		}
		counter++;
		format++;
	}
	va_end(denno);

	return (counter);
}
