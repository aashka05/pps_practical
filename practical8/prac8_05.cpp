// prac8_05.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <conio.h>

int factorial(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		int a;
		a = x * factorial(x-1);
		return a;
	}
}

void main()
{
	int x;
	printf("Enter number for factorial: ");
	scanf("%d", &x);
	printf("Factorial of %d is %d\n", x, factorial(x));
}
