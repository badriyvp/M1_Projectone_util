#include<stdio.h>

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
int name(int *r2,int *w2)

{
 if(*r2>50)
 printf("namee of player is virat\n");
 else
 printf("others\n");
    
}