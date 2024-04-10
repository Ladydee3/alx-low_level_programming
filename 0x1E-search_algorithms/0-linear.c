#include "search_algos.h"

/**
 * linear_search - search for value in an array of
 * integers using search algorithm
 *
 * @value: search in value
 * @array: array inlut
 * @size: array size
 * Return: XIT_SUCCESS always
 */
int linear_search(int *array, size_t size, int value)
{
	int num;

	if (array == NULL)
	return (-1);

	for (num = 0; num < (int)size; num++)
	{
	printf("Value checked array[%u] = [%d]\n", num, array[num]);
	if (value == array[num])
	return (num);
	}
	return (-1);
}

