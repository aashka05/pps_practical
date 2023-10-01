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

	int element;
	int flag = 0;
	printf("Enter element you want to search: ");
	scanf("%d", &element);
	for (i=0; i < n; i++)
	{
		if (l_read_array[i] == element)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("The element is present in array.\n");
			
	}
	else
	{
		printf("The element is not present in array.\n");
	}
	//printf("Value of %d of %d: %d\n", i, n, l_read_array[i]);

}