#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	int n;
	int l_read_array[100];
	
	do 
	{
		printf("Enter value of n (Max 100): ");
		scanf("%d", &n);
	} while(n > 100);

	for (i=1; i <= n; i++)
	{
		int m;
		printf("Enter value of %d of %d: ", i, n);
		scanf("%d", &m);
		l_read_array[i] = m;
	}

	
	for (i=1; i <= n; i++)
	{
		printf("Value of %d of %d: %d\n", i, n, l_read_array[i]);
	}

}
