/**
 * @file programm.c
 * @author alavala pavan
 * @brief  score board
 * @version 0.1
 * @date 2022-03-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include"programm.h"


 /*int scoreboard(int r1, int w1)

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

int match(int m1, int m2)
{
    
} */
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

 printf("name of player is virat\n");

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
        
        printf(" game changer \t");
    }

}

// defination of manofthematch function//

// here function taking 2 arguments as total and wic//

// if total is big than man of the match will be from that team right? // 

int manofthematch(int total, int wic)

 {
     if(total>300)

     {
         printf("man of the match is from this team \t");

     }

 }

