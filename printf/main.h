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

char t_char();
char t_string(); 
char t_percent();
char t_int();
char t_unsigned();
char t_octal();
char t_reverse();
char t_rot13();

int _putchar(char c);
int _printf(const char *format, ...);
#endif
