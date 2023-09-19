// prac4_1.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, sum=0, avg;
    clrscr();
    printf("Write value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    avg = sum / n;
    printf("\nSum = %d, Average = %d\n", sum, avg);
}
