/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: string parameter
 *Return: 1 or one
 */
int is_palindrome(char *s)
{
	if (*s)
		return (1);
	else if (*s == 0)
		return (0);
	else
		return (is_palindrome(s + 1));
}
