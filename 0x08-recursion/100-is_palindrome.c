#include"main.h"

int str_lenght(char *j);
int strcompare(char *i, int b, int len);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (strcompare(s, 0, str_lenght(s)));
}

/**
 * str_lenght - returns the length of a string
 * @j: string to calculate the length of
 *
 * Return: length of the string
 */

int str_lenght(char *j)
{
	if (*j == '\0')
	{
		return (0);
	}
	return (1 + str_lenght(j + 1));

}

/**
 * strcompare - checks the characters recursively for palindrome
 * @i: string to check
 * @b: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int strcompare(char *i, int b, int len)
{
	if (*(i + b) != *(i + (len - 1)))
	{
		return (0);
	}
	else if (b >= len)
	{
		return (1);
	}
	return (strcompare(i, b + 1, len - 1));
}
