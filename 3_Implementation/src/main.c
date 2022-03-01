#include"programm.h"

int main()
{
int runs, wickets, score, player;
printf("enter runs");

scanf("%d",&runs);

printf("enter wickets");

scanf("%d",&wickets);

score=  scoreboard(runs,wickets);

player= name(&runs,&wickets);


}