#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"
#define N 1024



main()
{
	char line[N] = {0};
	puts("Enter the line: ");
	fgets(line, N, stdin);
	line[strlen(line) - 1] = '\0';
	clear(line);
	printf("Clear line:%s", line);
	putchar('\n');
	system("pause");
	return 0;
}