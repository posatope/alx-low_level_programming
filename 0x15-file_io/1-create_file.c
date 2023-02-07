#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

/**
 * create_file - check the code
 * @filename: file name
 * @text_content: text
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, o , w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		i = strlen(text_content);
	o = open(filename, O_WRONLY | O_CREAT | O_RDWR | O_TRUNC, 0644);
	w = write(o, text_content, i);
	if (o == -1 || w == -1)
		return (-1);
	close (o);
	return (-1);
}
