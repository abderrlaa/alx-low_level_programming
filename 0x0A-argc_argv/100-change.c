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
	int cent[] = {25, 10, 5, 2, 1};
	int change = 0;
	int money;

	if (argc != 2)
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
		money = atoi(argv[1]);

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
		return(0);
	}
}
