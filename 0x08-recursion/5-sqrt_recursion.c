#include"main.h"

int calculate(int n, int j);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculate(n, 1));
}

/**
 * calculate - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */
int calculate(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	else if (j * j == n)
	{
		return (n);
	}
	else
	{
		return (calculate(n, (j + 1)));
	}

}

