char t_char(va_list ap)
{
}
/**
  * t_string - passes a string through
  * @ap: string to pass through
  * Return: unmodified string
  */
char *t_string(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);
	if (string == NULL)
		return ("(null)");
	return (string);
}
/**
  * t_percent - passes a % sign through
  * @ap: string to pass throguh
  * Return: percent sign as a character string
  */
char *t_percent()
{
    char *s;
    
    s = "%";
	return (s);
}
/**
 * t_reverse - reverses a string
 * @ap: string to reverse
 * Return: pointer to string
 */
char *t_reverse(va_list ap)
{
	unsigned int i = 0, n;
	char *string, s;

	string = va_arg(ap, char*);
	n = strlen(string);
	if (string == NULL)
			return ("(null)");
	for (; i < n; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	    s = string[i];
	    
	string[i] = s;
	return (string);
}
char t_int(va_list ap);
char t_unsigned(va_list ap);
char t_octal(va_list ap);
