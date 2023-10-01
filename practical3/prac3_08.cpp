#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	printf("CALCULATOR\n");
	printf("1: addition\n");
	printf("2: subtraction\n");
	printf("3: multiplication\n");
	printf("4: division\n");
	printf("5: exit\n");

	while(1)
	{
		int n1, n2;
		printf("Enter first number: ");
		scanf("%d", &n1);
		printf("Enter second number: ");
		scanf("%d", &n2);
		int ans;

		int op = 0;
		while(op == 0)
		{
			int ch;
			printf("Enter your choice: ");
			scanf("%d", &ch);

			switch(ch)
			{
			case 1:
				ans = n1 + n2;
				op = 1;
				break;
			case 2:
				ans = n1 - n2;
				op = 1;
				break;
			case 3:
				ans = n1 * n2;
				op = 1;
				break;
			case 4:
				ans = n1 / n2;
				op = 1;
				break;
			case 5:
				exit(0);
			default:
				printf("Enter correct operation.");
				break;

			}
		}
		printf("Ans: %d\n", ans);
	}
}