#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int currTime = 0, startHeight = 0;
	clock_t now;
	printf("Enter srart height: ");
	while (startHeight <= 0)
	{
		scanf("%d", &startHeight);
		if (startHeight <= 0)
		printf("Error!\nTgy again: ");
	}

	while (height(currTime, startHeight) > 0)
	{
		if(currTime<10)
		printf("\nt= 0%d s   h= %0.1f m", currTime, height(currTime, startHeight));
		if(currTime>=10)
		printf("\nt= %d s   h= %0.1f m", currTime, height(currTime, startHeight));
		now = clock();
		currTime++;	
		while (clock() <= now + CLOCKS_PER_SEC);
		
	}
	printf("\n	!!!BOOM!!!\n");
	system("pause");


	return 0;
}
