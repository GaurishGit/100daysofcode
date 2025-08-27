#include <stdio.h>

int main()
{
    int secs , hours , minutes ; 

    printf ("enter the total number of seconds : \n");
    scanf("%d",&secs);
  
    hours = secs / 3600;
    minutes = (secs % 3600) / 60;
    secs = (secs % 60);

   printf( "your finals time is %02d : %02d : %02d\n", hours , minutes , secs ); 

    return 0;
}
