char* process(char* line)
{
	char temp = 0;
	int j = strlen(line) - 1;
	for (int i = 0; i < j; i++)
	{
		if (line[i] <= '9')
		{
			for (; i < j; j--)
			{
				if (line[j] > '9')
				{
					temp = line[i];
					line[i] = line[j];
					line[j] = temp;
					break;
				}
			}
		}

	}
	return line;
}