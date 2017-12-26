#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#define N 256

main()
{ 
	char buf[N] = {0};
	int line = 1, count = 0;
	printf("Enter mumber of lines: ");
	scanf("%d/n", &count);
	for (int i = 0; i <count; i++)
	{	
		puts(layout(buf, line, count));
		line++;
	}
	system("pause");
	return 0;
}