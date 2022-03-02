
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