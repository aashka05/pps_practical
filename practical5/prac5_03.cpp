#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, k, l, n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n-i; j++)
		{
			printf("  ");
		}
		for (k = 1; k <= i; k++)
		{
			//printf(" %c", "a"+k);
			printf(" %d", k);
		}
		//k -= 2;
		for (k = i-1; k > 0; k--)
		{
			//printf(" %c", "a"+k);
			printf(" %d", k);
		}
		printf("\n");
	}
}
/*
void main()
{
	int i, j, n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c ", "A"+j);
		}
		printf("\n");
	}
}
*/