#include <stdio.h>
#include <conio.h>

void main()
{
	int i, n=0, sum=0, avg;
	for (i = 1; i <= 100; i++)
	{
	        if (i % 5 == 0)
	        {
		        n = n + 1;
			sum = sum + i;
	                printf("%d\n", i);
	        }
	}
        avg = sum / n;
	printf("Sum = %d, Average = %d\n", sum, avg);
}
