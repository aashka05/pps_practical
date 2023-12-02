#include <stdio.h>
#include <conio.h>

struct student
{
	int rollno;
	char name[50];
	int marks[5];
};

void main()
{
	struct student s[50];
	int x, i, j;
	x = 3; //number of records
	int y = 5; //number of marks
	for (i = 0; i < x; i++)
	{
		printf("---------RECORD %d---------\n",i+1);
		printf("Enter roll number: ");
		scanf("%d", &s[i].rollno);
		printf("Enter name: ");
		scanf("%s", s[i].name);
		for (j = 0; j < y; j++)
		{
			printf("Enter mark %d: ", j+1);
			scanf("%d", &s[i].marks[j]);
		}

	}

	int m;
	printf("Enter minimum mark: ");
	scanf("%d", &m);
	printf("-----------------------------\n");

	for (i = 0; i < x; i++)
	{
		int total = 0;
		for (j = 0; j < y; j++)
		{
			total += s[i].marks[j];
		}
		if (total > m)
		{
			printf("Roll number: %d, Name: %s\n", s[i].rollno, s[i].name);
		}
	}
}
