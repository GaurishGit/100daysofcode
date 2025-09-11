#include<stdio.h>
int main(int argc, char const *argv[])
{
    int profit, SP, CP , PP ;
   
    printf ("Enter your selling price and cost price\n");
    scanf("%d %d", &SP , &CP);

    profit = (SP - CP);

    PP = (profit*100)/CP;

    printf("This is your profit percentage: %d%% \n", PP );


    return 0;
}
