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
int runs, wickets, score;
scanf("%d",&runs);
scanf("%d",&wickets);

score=  scoreboard(runs,wickets);

}
int scoreboard(int r1, int w1)
{
    {
if (r1>100)
printf("century\n");
else if(r1<1)
printf("duckout\n");
    }
    {
    if(w1>=5)
    printf("fivewickets");

}



}

