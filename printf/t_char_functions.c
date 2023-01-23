char t_char(va_list ap);

char t_string(va_list ap); 
char t_percent(va_list ap);
char t_int(va_list ap);
char t_unsigned(va_list ap);
char t_octal(va_list ap);
/**
 * t_reverse - reverses a string
 * @ap: string to reverse
 * Return: pointer to string
 */
char t_reverse(va_list ap)
{
	
	int c;
	char s

	for (c = 0; ap[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		s = (ap[c]);
	return (s);
}

