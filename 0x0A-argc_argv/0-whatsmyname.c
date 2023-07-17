#include "main.h"
#include <stdio.h>

/**
 * main -writes the name of the program that prints its name
 * if you rename the program it will print the new name withouth havng to compile it again
 * you should not remove the path before the name of the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char * argv[])
{
	printf("%s\n", *argv[0]);
	(void)argc;
	return (0);
}
