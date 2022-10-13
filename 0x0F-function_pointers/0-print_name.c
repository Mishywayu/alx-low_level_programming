/**
 * print_name - pprints a aname
 *
 * @name: pointer to  a ame
 *
 * @f: function name
 *
 * Return: void (success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
