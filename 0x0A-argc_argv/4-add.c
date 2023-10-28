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

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
