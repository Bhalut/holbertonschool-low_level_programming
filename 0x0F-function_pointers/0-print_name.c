/**
 *print_name - prints a name
 *@name: name string
 *@f: pointer to function (char *)
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
