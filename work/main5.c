#include <stdio.h>
#include "task5.h"
#define N 9

int main()
{
	char line[N] = { 0 };

	for (int i = 0; i < 10; i++)
	{	
		puts(password(line));
	}
	system("pause");
	return 0;
}