#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

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
	printf("Enter number of records you want to store: ");
	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		printf("---------RECORD %d---------\n",i+1);
		printf("Enter roll number: ");
		scanf("%d", &s[i].rollno);
		printf("Enter name: ");
		scanf("%s", s[i].name);
		for (j = 0; j < 5; j++)
		{
			printf("Enter mark %d: ", j+1);
			scanf("%d", &s[i].marks[j]);
		}

	}
	printf("\nSTUDENT REPORT\n");
	printf("-----------------------------\n");
	for (i = 0; i < x; i++)
	{
	printf("Roll number: %d\nName: %s\nMark1: %d\nMark2: %d\nMark3: %d\nMark4: %d\nMark5: %d\n\n",
		s[i].rollno, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2], s[i].marks[3], s[i].marks[4]);
	}
}
