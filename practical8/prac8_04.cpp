// prac8_04.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <conio.h>

double power(double x, double y)
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
	double x, y;
	printf("Enter value of x: ");
	scanf("%lf", &x);
	printf("Enter value of y: ");
	scanf("%lf", &y);
	printf("%.2lf ^ %.2lf = %.2lf\n", x, y, power(x,y));
}