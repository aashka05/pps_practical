#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	int i;
	char str[100];
	int flag=0; 
	printf("Enter string: ");
	gets(str);
	int n = strlen(str);
	
	n--;
	for (i = 0; i <= n; i++)
	{
		if (str[i] != str[n-i])
		{
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		printf("Given string %s is not a palindrome.", str);
	}
	else
	{
		printf("Given string %s is a palindrome.", str);
	}

}