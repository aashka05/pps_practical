#include <stdio.h>
#include <conio.h>

void main()
{
	int n1, n2, n3;
	printf("LARGEST AMONG THREE NUMBERS\n");
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	printf("Enter third number: ");
	scanf("%d", &n3);

	if (n1 > n2)
	{
		if (n1 > n3)
		{
			printf("%d is greatest.\n", n1);
		}
		else
		{
			printf("%d is greatest.\n", n3);
		}
	}
	else
	{
		if (n2 > n3)
		{
			printf("%d is greatest.\n", n2);
		}
		else
		{
			printf("%d is greatest.\n", n3);
		}
	}
}