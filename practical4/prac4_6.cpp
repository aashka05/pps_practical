#include <stdio.h>
#include <conio.h>

void main()
{
    int i, x, y, answer=1;
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("Enter value of y: ");
    scanf("%d", &y);
	for (i = 1; i <= y; i++)
    {
		answer = answer * x;		
    }
	printf("x^y = %d\n", answer);
}