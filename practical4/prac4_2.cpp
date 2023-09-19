// prac4_2.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, sum=0, avg;
    //clrscr();
    printf("Write value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
		if (i % 2 != 0)
		{
			sum = sum + i;
		}
    }
    avg = sum / (n/2);
    printf("Sum = %d, Average = %d", sum, avg);
}
