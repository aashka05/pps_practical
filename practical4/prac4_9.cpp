#include <stdio.h>
#include <conio.h>

void main()
{
	int i, n, m;
	int l_prime_flag = 1;

	printf("PRIME NUMBER\n");
	printf("Enter number: ");
	scanf("%d", &n);
	while(n < 2)
	{
		printf("pl. enter number bigger than 1\n");
		scanf("%d", &n);
	}
	m = n / 2;
	if (n == 2)
	{
		l_prime_flag = 1;
	}
	else
	{
		for (i = 2; i <= m; i++)
		{
			if (n % i == 0)
			{
				l_prime_flag = 0;
				break;
			}
		}
	}
	if(l_prime_flag)
	{
		printf("%d is a prime number\n", n);
	}
	else
	{
		printf("%d is a composite number\n", n);
	}
	getch();
}