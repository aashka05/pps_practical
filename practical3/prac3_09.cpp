#include <stdio.h>
#include <conio.h>

void main()
{
	printf("CHECK WHETHER THE GIVEN YEAR IS LEAP OR NOT\n");
	int year;
	printf("Enter year: ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		printf("%d is a leap year.\n", year);
	}
	else
	{
		printf("%d is not a leap year.\n", year);
	}

}