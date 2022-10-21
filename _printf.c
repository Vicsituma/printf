#include "main.h"
/**
 * _printf - prints out whatever is passed in
 * @format: List of argument types
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vfprintf(stdout, format, args);

	return (done);
}
