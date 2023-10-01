#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str[1024];
	printf("Enter your name: ");
	gets(str);
	printf("%d\n", str[0]);
}