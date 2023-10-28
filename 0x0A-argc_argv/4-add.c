#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

/**
 * main -   that adds positive numbers, followed by a new line
 * @argc: argument count
 * @argv: arguments vector
 * @i: iterator
 * @sum: sum of numbers
 * Return: 0 If no number is passed to the program,
 * error if  one of the number contains symbols that are not digits,
 *  sum if success
*/
int main(int argc, char *argv[])
{
	 int i, sum = 0;

	if (argc == 1)
	{
		return (0);
		printf("\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		return (1);
	}
	return (sum);
}
