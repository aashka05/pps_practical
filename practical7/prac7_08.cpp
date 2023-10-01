#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str1[1024];
	char str2[1024];

	printf("STRING FUNCTIONS\n");
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	printf("strlen() to find Length of string 1: %d\n", strlen(str1));
	printf("strupr() to convert string 1 into uppercase: %s\n", strupr(str1));
	printf("strlwr() to convert string 1 into lowercase: %s\n", strlwr(str1));
	printf("strcpy(str2, str1) to copy str1 to str2: %s\n", strcpy(str2, str1));
	printf("strcmp(str1, str2) to compare str1 and str2: %d\n", strcmp(str1, str2));
	printf("strcat(str2, str1) to concatenate str1 to str2: %s\n", strcat(str2, str1));

}
