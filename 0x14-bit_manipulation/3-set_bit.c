/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer of number
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
		return (-1);

	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
