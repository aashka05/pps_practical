#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	int j;
	int n;
	int l_read_array_a[3][3];
	int l_read_array_b[3][3];
	int c[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter element A%d%d: ", i+1, j+1);
			scanf("%d", &(l_read_array_a[i][j]));
		}
	}

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("Enter element B%d%d: ", i+1, j+1);
			scanf("%d", &(l_read_array_b[i][j]));
		}
	}

	printf("Matrix C: A + B is: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", l_read_array_a[i][j] + l_read_array_b[i][j]);
		}
		printf("\n");
	}
	getch();
}