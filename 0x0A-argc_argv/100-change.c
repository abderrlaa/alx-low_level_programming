#include<stdio.h>
#include<stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cent, count = 0;
	int change[] = {25, 10, 5, 2, 1};
	int money = atoi(argv[1]);

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
	}
	else
	{
			for (int i = 0; i < 5; i++)
			{
				if (money == 0)
				{
					break;
				}
				else
				{
					while (money >= change[i])
				{
					money -= change[i];
					count++;
				}
				}

			}
			printf("%d", count);

	}
}
