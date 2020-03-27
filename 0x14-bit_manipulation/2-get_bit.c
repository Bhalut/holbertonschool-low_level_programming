/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: starting from 0 of the bit you want to get
 * Returns: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n >>= index;
	return (n & 1);
}
