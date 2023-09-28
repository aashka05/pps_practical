#include <stdio.h>
#include <conio.h>

void main()
{
	int m, n, l, rev = 0;
	printf("Enter number: ");
	scanf("%d", &n);
	m = n;
	
	while ( n > 0)
	{
		l = n % 10;
		rev = rev * 10 + l;
		n = n / 10;
	}

	if (m == rev)
	{
		printf("It's palindrome.\n");
	}
	else
	{
		printf("It's not an palindrome.\n");
	}
	getch();

}