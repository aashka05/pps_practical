#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, t1=0, t2=1, nt=1;
	printf("Enter term upto which fibonacci series is to be found: ");
	scanf("%d", &n);
	printf("%d\n", t1);
	printf("%d\n", t2);
	for (i = 3; i <= n; i++)
    {
		printf("%d\n", nt);
		t1 = t2;
		t2 = nt;
		nt = t1 + t2;
    }
}
