#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, k, l, n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int p = 1;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d", p);
			p = (p) ? 0 : 1;
		}
		printf("\n");
	}
}