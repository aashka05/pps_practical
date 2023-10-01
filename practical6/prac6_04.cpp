#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	int j;
	int n;
	int l_read_array[100];
	
	do 
	{
		printf("Enter value of n (Max 100): ");
		scanf("%d", &n);
	} while(n > 100);

	for (i = 0; i < n; i++)
	{
		int m;
		printf("Enter value of %d of %d: ", i+1, n);
		scanf("%d", &m);
		l_read_array[i] = m;
	}
	
	//int smallest = l_read_array[0];
	//int l_read_array[] = {4, 2, 5, 8, 1};
	int z = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (l_read_array[i] > l_read_array[j])
			{
				z = l_read_array[i];
				l_read_array[i] = l_read_array[j];
				l_read_array[j] = z;
			}
		}
		
	}
	for (i=0; i < 5; i++)
	{
		printf("Value of %d of %d: %d\n", i, 5, l_read_array[i]);
	}
		
}