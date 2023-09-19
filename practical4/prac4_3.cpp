// prac4_3.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, x, y, sum=0, avg;
    printf("Write value of x: ");
    scanf("%d", &x);
    printf("Write value of y: ");
    scanf("%d", &y);
    for (i = x; i <= y; i++)
    {
        printf("%d ", i);
    }
}
