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

	for (i=0; i < n; i++)
	{
		int m;
		printf("Enter value of %d of %d: ", i+1, n);
		scanf("%d", &m);
		l_read_array[i] = m;
	}
	int greatest = l_read_array[0];
	int smallest = l_read_array[0];
	for (i=0; i < n; i++)
	{
		if (l_read_array[i] > greatest)
		{
			greatest = l_read_array[i];
		}
		if (l_read_array[i] < smallest)
		{
			smallest = l_read_array[i];
		}
	}
	printf("Value of smallest number is %d and greatest number is %d\n", smallest, greatest);
}