#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j;
	int arr[3][3];
	int sum_row = 0;
	int sum_col = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter value of A%d%d: ", i+1, j+1);
			scanf("%d", &(arr[i][j]));
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", (arr[i][j]));
			sum_row += (arr[i][j]);
		}
		printf("%d ", sum_row);
		printf("\n");
		sum_row = 0;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum_col += (arr[j][i]);
		}
		printf("%d ", sum_col);
		sum_col = 0;
	}



}