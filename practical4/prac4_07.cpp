#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, factorial=1;
	printf("Enter number for its factorial: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
    {
		factorial = factorial * i;		
    }
	printf("factorial = %d\n", factorial);
}
