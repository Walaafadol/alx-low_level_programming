#include "function_pointers.h"
/**
*print_name - print aname
*@name:parameter
*@f:parameter
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
