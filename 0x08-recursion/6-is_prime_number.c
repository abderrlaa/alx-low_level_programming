#include"main.h"
int check_prime(int n, int j);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, 2));
	}
}

/**
 * check_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @j: iterator
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int j)
{
	if (j == n)
	{
		return (1);
	}
	else if (n % j == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, (j + 1)));
	}

}

