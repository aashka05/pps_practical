#include <stdio.h>
#include <conio.h>

void main()
{
	int n;
	printf("DIVISIBILITY BY 5 and 11\n");
	printf("Enter number: ");
	scanf("%d", &n);

	if (n % 5 == 0 && n % 11 == 0)
	{
		printf("%d is divisible by 5 and 11.\n", n);
	}
	else
	{
		printf("%d is not divisible by 5 and 11.\n", n);
	}
}
