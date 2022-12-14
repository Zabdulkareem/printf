#include "main.h"
/**
 * print_c - prints char string
 * @ap: char arguement
 * Return: String verion of char
 */
char *print_c(va_list ap)
{
	char *s;
	char c;

	c = va_arg(ap, int);

	if (c == 0)
		c = '\0';

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';

	return (s);
}
