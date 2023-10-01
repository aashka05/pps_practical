#include <stdio.h>
#include <conio.h>

void main()
{
	int n;
	printf("CHECK EVEN OR ODD\n");
	printf("Enter your number: ");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("%d is even.\n", n);
	}
	else
	{
		printf("%d is odd.\n", n);
	}
	getch();
}