#include "main.h"
/**
 * print_s - returns string to the stdout
 * @ap: string arguement
 * Return: a string
 */
char *print_s(va_list ap)
{
	char *s;
	char *p;
	int len;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);

	return (_strcpy(p, s));
}
