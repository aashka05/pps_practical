#include <stdio.h>
#include <conio.h>

struct cricket
{
	char player[50];
	char team[50];
	float avg;
};

void main()
{
	struct cricket c;
	printf("Input player name: ");
	scanf("%s", c.player);
	printf("Input team name: ");
	scanf("%s", c.team);
	printf("Input batting average: ");
	scanf("%f", &c.avg);
	printf("Player name: %s\nTeam name: %s\nBatting average: %.1f\n", c.player, c.team, c.avg);
}