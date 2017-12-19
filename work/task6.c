#include <string.h>

char * clear(char * line)
{
	int i = 0, j = 0;
	int len = strlen(line);
	line[len] = '\0';

	for (i = 0; i < len; i++)
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
		{
			for (j = i + 1; j < len; j++)
			{
				line[j] = line[j + 1];
			}
		}
	}

	while (line[len - 2] == ' ')
	{
		line[len - 2] = '\0';
		len--;
	}
	if (line[0] == ' ')
	{
		for (j = 0; j < len; j++)
		{
			line[j] = line[j + 1];
		}
	}

	return line;
}