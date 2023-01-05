#include "main.h"
/**
 * find_sqrt - returns the natural square root of a number
 * @n: number to return the square root of
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
