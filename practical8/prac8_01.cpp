#include <stdio.h>
#include <conio.h>

void check_e_o(int number)
{
	if (number % 2 == 0)
	{
		printf("%d is even\n", number);
	}
	else
	{
		printf("%d is odd\n", number);
	}
}

void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	check_e_o(n);
}
