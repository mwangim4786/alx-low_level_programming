#include "function_pointers.h"

/**
  * int_index - function
  * @array: array
  * @size: array size
  * @cmp: function pointer to compare
  *
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
