#include <stdio.h>
#include <conio.h>
#include <cstdlib>

void main()
{
	int i;
	int j;
	int n;
	int l_read_array[100];

	srand(345);
	
	do 
	{
		printf("Enter value of n (Max 100): ");
		scanf("%d", &n);
	} while(n > 100);

	for (i = 0; i < n; i++)
	{
		int m;
		if(0) 
		{
		printf("Enter value of %d of %d: ", i+1, n);
		scanf("%d", &m);
		l_read_array[i] = m;
		} 
		else 
		{
			l_read_array[i] = rand();
		}
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", l_read_array[i]);
	}

	//array[] = {1,2,4,5,6}
	int location;
	int value;
	int temp;
	printf("Enter location of the value to be deleted: ");
	scanf("%d", &location);

	if(location > 0) location--;

	for (i = location; i < n; i++)
	{
		l_read_array[i] = l_read_array[i+1];
	}

	for (i = 0; i < n-1; i++)
	{
		printf("%d\n", l_read_array[i]);
	}

}