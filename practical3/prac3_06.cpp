#include <stdio.h>
#include <conio.h>

void main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	
	if (marks >= 80)
	{
		printf("Distinction\n");
	}
	else if (marks >= 60 & marks <= 79)
	{
		printf("First Class\n");
	}
	else if (marks >= 35 & marks <= 59)
	{
		printf("Second Class\n");
	}
	else
	{
		printf("Fail\n");
	}
}