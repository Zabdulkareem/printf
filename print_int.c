#include "main.h"

/**
 * _itos - converts an integer to a string
 * @tens: multiple of 10
 * @length: length of int
 * @n: integer converted to string
 * Return: string
 */
char *_itos(int tens, int length, int n)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * length + 2);
	if (str == NULL)
		return (NULL);

	if (n < 0) /* handles negative ints (minus) */
	{
		str[0] = '-';
		i++;
	}
	while (n < 0) /* casts ints to string */
	{
		str[i] = ((n / tens) * -1 + '0'); /* *-1 to handle min val of int */
		n = n % tens;
		tens /= 10;
		i++;
	}
	while (tens >= 1) /* This block handles positive integers */
	{
		str[i] = ((n / tens) + '0');
		n = n % tens;
		tens /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * print_d - gets length to put in _itos
 * @ap: arg passed to the function
 * Return: integar string
 **/
char *print_d(va_list ap)
{
	int length, tens, n, temp;

	n = va_arg(ap, int);
	temp = n;
	length = 0;
	tens = 1;

	if (n == 0) /* handles int 0 having with length 1 */
	{
		length++;
		return (_itos(tens, length, n));
	}

	while (temp != 0) /* divides multiples of ten */
	{
		length += 1;
		if (length > 1)
			tens *= 10;
		temp /= 10;
	}

	return (_itos(tens, length, n));
}
