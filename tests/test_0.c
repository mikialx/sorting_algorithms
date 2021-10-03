#include <stdio.h>
#include "../main.h"

int main(void)
{
	int x = _printf("Hello, %%%s%c%c", "World", '!', '\n');
	printf("\n%d\n", x);

	return (0);
}