#ifndef PRINTF_H
#define PRINF_H

/**
  * struct validTypes - structure to lookup functions for valid types
  * @valid: flags are preceded by a '%' character.
  * @f: pointer to function
  */
typedef struct op
{
	char *op;
	char (*f)();
} v_types;

char t_char(va_list ap);
char t_string(va_list ap); 
char t_percent(va_list ap);
char t_int(va_list ap);
char t_unsigned(va_list ap);
char t_octal(va_list ap);
char t_reverse(va_list ap);
char t_rot13(va_list ap);

int _putchar(char c);
int _printf(const char *format, ...);
#endif
