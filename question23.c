#include<stdio.h>
int main(int argc, char const *argv[])
{
    int days, n  ; 

    printf("Enter the number of days\n");
    scanf("%d", &days );
    
    if( 0 < days && days <= 5 ) 
    {
      n = days*2;
      printf("Your total fine is %dRs", n ); 
    }
    
    else if ( 5 < days && days <= 10 )
     {
      n = days*4;
      printf("Your total fine is %dRs", n ); 

     }
       
      else if ( 10 < days && days <= 30 )
     {
      n = days*6;
      printf("Your total fine is %dRs", n ); 

     }

     else if ( 30 < days )
     {
      printf("Your Membership is cancelled"); 
     }     
    return 0;
}
