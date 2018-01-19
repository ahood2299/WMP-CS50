#include<stdio.h>
#include<math.h>
#include<cs50.h>
int main()
{
    float f;
    int cash, ctr=0;
    do{
     printf("How much change is owed?");
     f=get_float();
     printf("Change owed is %f", f);
    }while(f<0);
    cash=f*100; //converting to integer
    while ( cash >= 25 )
    {
           ctr += 1;
           cash = cash - 25;
    }
    while ( cash>= 10 )
    {
           cash = cash - 10;
           ctr += 1;
    }
    while (cash >= 5 )
    {
           cash = cash - 5;
           ctr += 1;
    }
    printf("Coins owed is %d\n", ctr + cash);
}