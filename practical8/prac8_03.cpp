// prac8_03.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <conio.h>

int greatest(int x, int y, int z)
{
	if (x > y)
	{
		if (x > z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else
	{
		if (y > z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
}


void main()
{
	int x, y, z;
	printf("Enter number 1: ");
	scanf("%d", &x);
	printf("Enter number 2: ");
	scanf("%d", &y);
	printf("Enter number 3: ");
	scanf("%d", &z);
	printf("The gretest number is %d\n", greatest(x, y, z));
}

