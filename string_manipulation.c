#include "main.h"

/**
  * print_char - print a xharacter
  *@a: char
  *Return: 1 on success
  */

int print_char(char a)
{
	return (write(1, &a, 1));
}

/**
  *print_str - print string
  *@str: string
  *
  *Return: string length
  */

int print_str(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count += print_char(*str);
		str++;
	}

	return (count);
}
