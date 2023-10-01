#include <stdio.h>
#include <conio.h>

void main()
{
	printf("CHECK UPRCASE, LWRCASE, DIGIT OR SPCHAR\n");
	char ch;
	printf("Enter your character: ");
	scanf("%c", &ch);
	int acode = int (ch);

	if (acode >= 65 & acode <= 90)
	{
		printf("%c is an uppercase character\n", ch);
	}
	else if (acode >= 98 & acode <= 122)
	{
		printf("%c is a lowercase character\n", ch);
	}
	else if (acode >= 48 & acode <= 57)
	{
		printf("%c is an digit\n", ch);
	}
	else
	{
		printf("%c is a special character\n", ch);
	}
}