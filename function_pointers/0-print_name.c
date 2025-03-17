/**
 * print_name - print a string via a pointer on a function
 * @name: name to print (string)
 * @f: function that prints a name (in lower or uppercase)
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
