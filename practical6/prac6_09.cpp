#include <stdio.h>
#include <conio.h>

void main()
{
	int arr[3][3];
	int i,j;
	int sum_row = 0;
	int sum_col = 0;
	int sum_d1 = sum_d2 = 0;

	bool flag = false;

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("Enter value of A%d%d: ", i, j);
			scanf("%d", &(arr[i][j]));
		}
	}

	// diagonal
	for ( i = 0; i < 3; i++)
	{
		sum_d1 += arr[i][i];
		sum_d2 += arr[i][3-i-1];
	}

	if (sum_d1 != sum_d2)
	{
		flag = true;
	}

	//row and column
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum_row += arr[i][j];
			sum_col += arr[j][i];
		}
		
		if (sum_row != sum_col || sum_col != sum_d1)
		{
			flag = true;
		}
	}

	if (flag)
	{
		printf("The given matrix is not a magic square");
	}
	else
	{
		printf("The given matrix is a magic square");
	}

	
}