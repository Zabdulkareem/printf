#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>	/* includes va_list macros */
#include <stdlib.h>	/* includes malloc, free */
#include <unistd.h>	/* for write function */

int _putchar(char c);
int _printf(const char *format, ...);
char *print_s(va_list ap);
char *print_c(va_list ap);
char *print_d(va_list ap);
int check_buff_overflow(char *buff, int len);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#define va_int va_arg(ap, int)
#define va_char va_arg(ap, char *)

typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;

#endif /* MAIN_H */
