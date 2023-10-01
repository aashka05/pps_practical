#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, k, l, n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int last = n * (n + 1) / 2;

	for (i = 1; i <= n; i++)
	{
		last = last - (n - i) - 2;
		for (j = i; j <= n; j++)
		{
			printf(" %c", 'A' + last + j);
		}
		printf("\n");
	}
}