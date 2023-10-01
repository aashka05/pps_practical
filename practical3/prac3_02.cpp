#include <stdio.h>
#include <conio.h>

void main()
{
	int n1, n2;
	printf("CHECK GREATER OF TWO NUMBERS\n");
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("%d is greater number.\n", n1);
	}
	else
	{
		printf("%d is greater number.\n", n2);
	}

	getch();
}