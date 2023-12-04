#include <stdio.h>
#include <conio.h>

int sum_n(int n)
{
	return n * (n + 1) / 2;
}

void main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("%d\n", sum_n(n));
}
