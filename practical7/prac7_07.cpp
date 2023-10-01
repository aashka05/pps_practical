#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str[1024];
	char ch;
	printf("Enter your string: ");
	gets(str);
	printf("Enter your character: ");
	scanf("%c", &ch);
	int flag = 0;
	int n = strlen(str);
	int i;

	for (i = 0; i <= n; i++)
	{
		if (str[i] == ch)
		{
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		printf("%c is present in %s.\n", ch, str);
	}
	else
	{
		printf("%c is not present in %s.\n", ch, str);
	}
}