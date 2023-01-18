#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - prints a name as is
 * @array: prints a name as is
 * @size: name of the person
 * @action: prints a name as is
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
