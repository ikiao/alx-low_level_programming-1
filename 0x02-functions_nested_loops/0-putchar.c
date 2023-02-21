#include <stdio.h>
/**
 *_putchar - writes the character c to output
 *@c: the character allocated
 *Return: 0
 *else return 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
