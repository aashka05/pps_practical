#include <stdio.h>
#include <conio.h>

void main()
{
	printf("CHECK PASS/FAIL BASED ON AVG OF 4 MARKS\n");
	int math, phy, chem, cs;
	printf("Enter math marks: ");
	scanf("%d", &math);
	printf("Enter phy marks: ");
	scanf("%d", &phy);
	printf("Enter chem marks: ");
	scanf("%d", &chem);
	printf("Enter cs marks: ");
	scanf("%d", &cs);
	int sum, avg;
	sum = math + phy + chem + cs;
	avg = sum / 4;

	if (avg >= 33)
	{
		printf("PASS\n");
	}
	else 
	{
		printf("FAIL\n");
	}

}