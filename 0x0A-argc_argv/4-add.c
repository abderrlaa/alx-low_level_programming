#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (!isdigit(atoi(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[i]);
	}
	printf("%d", sum);
	return (0);
}
