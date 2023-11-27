#include <stdio.h>
#include <conio.h>

void swap(int a, int b)
{
	int c;
	printf("a = %d and b = %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("Now a = %d and b = %d\n", a, b);
}

void main()
{
	int a, b;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	swap(a,b);
}