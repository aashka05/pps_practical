#include <stdio.h>
#include <conio.h>

void main()
{
	printf("CHECK FOR VOWEL OR CONSONANT\n");
	char ch;
	printf("Enter your character: ");
	scanf("%c", &ch);
	
	if (ch == 'a' ||
		ch == 'e' || 
		ch == 'i' || 
		ch == 'o' || 
		ch == 'u')
	{
		printf("%c is vowel\n", ch);
	}
	else
	{
		printf("%c is consonant\n", ch);
	}
}