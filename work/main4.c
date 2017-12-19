#include <stdio.h>
#include <time.h>
#include "task4.h"
#define N 100


int main()
{
	char buf[N] = {0};
	puts(buf);
	srand(time(0));
	for (int i = 0; i < N-1; i++)
	{
		if (rand() % 100 <= 33)
			buf[i] = rand() % ('9' - '0' + 1) + '0';
		else if (rand() % 100 > 67)
			buf[i] = rand() % ('z' - 'a' + 1) + 'a';
		else
			buf[i] = rand() % ('Z' - 'A' + 1) + 'A';

	}
	buf[N-1] = '\0';
	puts(buf);
	puts(process(buf));
	system("pause");
	return 0;
}
