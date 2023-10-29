#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the minimum number of coins for change
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0-success, non-zero-fail
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int money = atoi(argv[1] - 1);
	int cent[] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
	}
		for (i = 0; i < 5; i++)
		{

			if ((money == 0))
			{
				break;
			}
			while (money >= cent[i])
			{
				money -= cent[i];
				change++;
			}

		}
		printf("%d\n", change);
		return (0);
}
