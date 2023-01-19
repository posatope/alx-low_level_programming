#include <stdio.h>
/**
 * array_iterator - prints a name as is
 * @array: prints a name as is
 * @size: name of the person
 * @action: prints a name as is
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;
    
    if (size <= 0)
    {
        return -1;
    }
    else 
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) == 1)
        {
            return (i);
        }
    }
    return (0);
}
