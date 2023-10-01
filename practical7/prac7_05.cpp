#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str1[1024];
	char str2[1024];

	printf("Enter your string: ");
	gets(str1);
	int n = strlen(str1);
	int i;
	//strcpy(str2, str1);
	//printf("%s\n", str2);
	for (i = 0; i <= n; i++) 
	{
		str2[i] = str1[i];
	}
	printf("The new string is %s\n", str2);
}

