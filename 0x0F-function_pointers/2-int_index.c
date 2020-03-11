/**
 *int_index - searches for an integer.
 *@array: array pointer
 *@size: size of array
 *@cmp: pointer to function
 *Return: array index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	else
	{
		return (-1);
	}

}
