/**
 *reverse_array - reverses the content of an array of integers.
 *@a: pointer parameter
 *@n: enteger parameter
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0, x;

	while (j < a[i])
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
		i--;
		j++;
	}
}
