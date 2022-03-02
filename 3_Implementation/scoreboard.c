
#include<stdio.h>

int main()

{

int runs, wickets, score, player, match, mvp, teamtotal,halfruns;/*here i have taken input from the user and
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
// scoreboard function is here and its defination//

// here the possible output is that if the batsmen score a 100 then it will respond //

int scoreboard(int r1, int w1)
{
    {

if (r1>100)

printf("century good match\n");

else if(r1<1)

printf("duckout\n");

    }

    {

    if(w1>=5)

    printf("fivewickets great bolwer\n");

    else if(w1<=1)

    printf("most expensive bolwer\n");

}

}
// defination of name function//

// name function taking two arguments as call  by address//

int name(int *r2,int *w2)

{
 if(*r2>50)

 printf("namee of player is virat\n");

 else

 printf("others\n");
    
}
// defination of cricket function//

// here m1 and m2 are two arguments //

int cricket(int m1,int m2)

{
    if(m1>50 && m2>5)

    {
        printf(" he is an allrounder");
        printf(" game changer");
    }

}

// defination of manofthematch function//

// here function taking 2 arguments as total and wic//

// if total is big than man of the match will be from that team right? // 

int manofthematch(int total, int wic)

 {
     if(total>300)

     {
         printf("man of the match is from this team");

     }

 }