#include <stdio.h>
#include "../main.h"

int main(void)
{
	int x = _printf("Hello, %%%s%c%c%c", "World", '!', '\n', '9');
	int y = printf("Hello, %%%s%c%c%c", "World", '!', '\n', '9');

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	x = _printf("%c%s%%%c%s\n", 'H', NULL, 'W', "orld!");
/*
	y = printf("%c%s%%%c%s\n", 'H', NULL, 'W', "orld!");
*/

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return (0);
}