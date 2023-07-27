#include <stdio.>

/**
 * bmain - function executed before main
 * Return: no return
 */

void _attribute_ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
