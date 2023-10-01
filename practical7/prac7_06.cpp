#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str[1024];
	printf("Enter your string: ");
	gets(str);
	int count = 1;
	int i;
	int n = strlen(str);
	char ns = ' ';

	for (i = 0; i <= n; i++)
	{
		//printf("%s", str[i];
		if (str[i] == ns)
		{
			count ++;
		}
	}
	printf("Number of words= %d\n", count);
}