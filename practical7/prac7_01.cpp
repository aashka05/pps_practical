#include <stdio.h>
#include <conio.h>

void main()
{
	char str[100];
	printf("Enter string: ");
	gets(str);
	printf("%s\n", str);
	int i = 0;
	while(str[i])
	{
		i++;
	}
	printf("string len: %d\n", i);
	getch();
}
