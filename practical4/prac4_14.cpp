#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int i, n, m, last_digit, pow3, arm = 0;
	printf("ARMSTRONG NUMBER\n");
	printf("Enter number: ");
	scanf("%d", &n);
	m = n;
	while (n > 0)
	{
		last_digit = n % 10;
		pow3 = pow(float(last_digit), 3);
		arm += pow3;
		n = n / 10;

	}
	if (m == arm)
	{
		printf("%d is an armstrong number.\n", m);
	}
	else
	{
		printf("%d is not an armstrong number.\n", m);
	}
}
