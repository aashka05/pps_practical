#include <stdio.h>
#include <conio.h>

void main()
{
	int i, n;
	float sum = 0;
	printf("Enter value of n: ");
	scanf("%d", &n);
	for (i=1; i <= n; i+=2)
	{
		sum = sum + (1.0/i);
	}
	printf("Sum of series is %f\n", sum);

}