#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int value = 0, secret = 0;
	srand(time(0));
	secret = rand() % 100;
	while (1)
	{
		printf("Enter value: ");
		scanf("%d", &value);
		int rez = turn(value, secret);
		switch (rez)
		{
		case 1:
			printf("меньше...\n");
			break;
		case -1:
			printf("больше...\n");
			break;
		case 0:
			printf("”гадал!\n");
			break;
		}
		if (rez==0)
		break;
	}
	system("pause");
	return 0;
}