#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: array of elements
 * @size: size of array.
 * @action: callback function.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action && array)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
