#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int last_digit, n, sum = 0;
	printf("SUM OF DIGITS\n");
	printf("Enter number: ");
	scanf("%d", &n);
	while (n > 0)
	{
		last_digit = n % 10;
		sum += last_digit;
		n = n / 10;
	}
	printf("Sum of digits is %d\n", sum);
}