#include <stdio.h>
#include "../main.h"

int main(void)
{
	int x = _printf("Hello, %%%s%c%c", "World", '!', '\n');
	int y = printf("Hello, %%%s%c%c", "World", '!', '\n');

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return (0);
}