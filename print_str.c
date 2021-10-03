#include "main.h"

/**
 *
 */
int print_str(char *str)
{
	int i = 0;

	for (i = 0; str != NULL && str[i] != 0; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
