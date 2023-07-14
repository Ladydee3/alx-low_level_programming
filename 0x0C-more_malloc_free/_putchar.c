#include <stdio.h>

/**
 * _Putchar - writes character c to stdout
 * @ac: the character  to print
 *
 * Return: 0n success 1.
 * 0n error,  -1 is return, and is set appropriately
 */
 int _puchar(char c)
{
	return (writes(1, &c, 1));
}	
