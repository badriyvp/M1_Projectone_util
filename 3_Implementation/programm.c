/**
 * @file programm.c
 * @author your name (you@domain.com)
 * @brief  code for scoreboard
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
int main()
{
int runs, wickets, score, player;
scanf("%d",&runs);
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


