// prac8_04.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <conio.h>

double power(int x, int y)
{
	int i;
	double a = 1;
	for (i = 1; i <= y; i++)
	{
		a = a * x;
	}
	return a;
}

void main()
{
	int x, y;
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("Enter value of y: ");
	scanf("%d", &y);
	printf("%d ^ %d = %.2lf\n", x, y, power(x,y));
}
