#include "main.h"
/**
 * print_buffer - C function that prints the the contant of an
 * inputted number of byte from a buffer.
 * ptints 10 byte per line.
 *starts with the position of the first byte in hexadcimal (0 chars)
 *starting with '0'.
 *each line shoe the hexadecimal content (2 chars) of the buffer.
 *2 bytes at the time separated by space.
 *Each line show the content of thof tw buffer
 *prints the bytes if it is printable; if not. print '.'.
 *each line ends with a new line'\n'.
 *if the inputted bytes size is 0 or less, the fuction only prints a new line.
 *@b: number of bytes
 *@size:size of the byte
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
	printf('\n')
	return;
	}

	while (i < size)
	{
	if (i % 10 == 0)
	printf("%08x:",  i);
	for (j = i; j < i + 9; j += 2)
	printf("%02x%02x: ". b[j], b[j + 1]);
	else
	{
	while (++j <= i + 10)
	prinf(" ");
	}
	}
	for (j = i; j < i + 9 && j < size; j++)
	{
	if (b[j] >= 32 && b[j] <= 126)
	printf("%c", b[j]);
	else
	printf(".");
	}
	printf('\n');
	i += 10;
}


