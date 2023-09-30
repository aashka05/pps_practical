#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, i, n=0, sum=0;
	float avg;
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("Enter value of y: ");
	scanf("%d", &y);

	for (i = x; i <= y; i++)
    {
        if (i % 2 != 0)
        {
		sum = sum + i;
            	printf("%d, %d\n", i, sum);
		n += 1;
        }
    }
	avg = (float)sum / n;
	printf("Sum = %d, Average = %f\n", sum, avg);
	getch();
}
