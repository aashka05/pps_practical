#include <stdio.h>
#include <conio.h>

struct hotel
{
	char name[50];
	char address[200];
	int grade;
	float room_charge;
	int no_of_room;
};


void hotel_by_grade(struct hotel arr[], int grade, int arrsize)
{
	int i;
	printf("Hotels having grade %d: \n", grade);
	for (i = 0; i < arrsize; i++)
	{
		if (arr[i].grade == grade)
		{
			printf("Name: %s, Charges: %.2f\n", arr[i].name, arr[i].room_charge);
		}
	}
}

void hotel_by_charge(struct hotel arr[], float charge, int arrsize)
{
	int i;
	printf("Hotels under charge %.2f: \n", charge);
	for (i = 0; i < arrsize; i++)
	{
		if (arr[i].room_charge <= charge)
		{
			printf("Name: %s, Charges: %.2f\n", arr[i].name, arr[i].room_charge);
		}
	} 
}


void main()
{
	int grade;
	float charge;
	struct hotel arr[] = {
		{"a", "address a", 3, 700, 30},
		{"b", "address b", 4, 7000, 100},
		{"c", "address c", 3, 650, 40},
	};

	printf("Enter grade: ");
	scanf("%d", &grade);

	printf("Enter charges: ");
	scanf("%f", &charge);

	int arrsize = sizeof(arr)/sizeof(arr[0]);
	
	int i, j;
	struct hotel z;
	for (i = 0; i < arrsize; i++)
	{
		for (j = i+1; j < arrsize; j++)
		{
			if (arr[i].room_charge > arr[j].room_charge)
			{
				z = arr[i];
				arr[i] = arr[j];
				arr[j] = z;
			}
		}
	}

	hotel_by_grade(arr, grade, arrsize);
	hotel_by_charge(arr, charge, arrsize);
}

