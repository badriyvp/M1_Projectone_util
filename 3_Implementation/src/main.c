#include"programm.h"

/* int main()
{
int runs, wickets, score, player;
printf("enter runs");

scanf("%d",&runs);

printf("enter wickets");

scanf("%d",&wickets);

score=  scoreboard(runs,wickets);

player= name(&runs,&wickets);


} */



int main()

{

int runs, wickets, score, player, match, mvp, teamtotal,halfruns;
/*here i have taken input from the user and

the inputs are runs and wickets by a player */

halfruns= teamtotal/2;

printf("enter runs");

scanf("%d",&runs);

printf("enter wickets");

scanf("%d",&wickets);

printf(" total runs scored by team");

scanf("%d",&teamtotal);

// calling scoreboard function//

score=  scoreboard(runs,wickets);

// calling name function //

player= name(&runs,&wickets);

// calling cricket function//

match= cricket(runs,wickets);

//calling manofthematch function//

mvp= manofthematch(teamtotal, wickets);


}