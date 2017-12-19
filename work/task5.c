#include <time.h>

char * password(char * line)
{
	clock_t now;
	srand(time(0));
	for (int i = 0; i < 8; i++)
	{
		if (rand() % 100 <= 33)
			line[i] = rand() % ('9' - '0' + 1) + '0';
		else if (rand() % 100 > 67)
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		else
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		
	}
	now = clock();
	while (clock() < now + CLOCKS_PER_SEC);
	return line;
	
}