#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

/**
 * main -   that adds positive numbers, followed by a new line
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	 int i, j, sum = 0;

	if (argc == 1)
	{
		return (0);
		printf("\n");
	}
	else
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j != '\0'; i++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error");
				return (1);
			}

		}
		sum += atoi(argv[i]);
	}
	return (sum);
}