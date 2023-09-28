#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int x, n;
	float sum = 1;
	int l_divider = 1;
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("Enter value of n: ");
	scanf("%d", &n);
	for (int i = -1; i >= -n; i--)
	{
		l_divider = l_divider * i;
		sum = sum + (pow((float)x,-i))/l_divider;
		printf("l_divider: %d %f\n", l_divider, sum);
	}
}