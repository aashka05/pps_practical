#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str[1024];
	char str1[1024];
	int i, n, temp;
	printf("Enter string: ");
	gets(str);
	n = strlen(str);
	printf("string length: %d\n", n);
/*
	for (i = n-1; i >= 0; i--)
	{
		str1[n-i-1] = str[i];
	}
	str1[n] = NULL;
*/
	//n--;
	for (i = 0; i < (n/2); i++)
	{
		temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
	printf("%s\n", str);
}