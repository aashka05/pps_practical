#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, k, l, n;
	printf("%d\n", sizeof("a"));
	printf("Enter value of n: ");

	scanf("%d", &n);
	//int last = n * (n + 1) / 2;
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		//last = last - (n - i) - 2;
		for (j = 0; j < i; j++)
		{
			printf(" %c", 'a' + count);
			count++;
		}
		printf("\n");

	}
}