#include<stdio.h>
int main(int argc, char const *argv[])
{
    int units, n  ; 

    printf("Enter the number of units\n");
    scanf("%d", &units );
    
    if( 0 < units && units <= 100 ) 
    {
      n = units*5;
      printf("Your total bill is %dRs", n ); 
    }
    
    else if ( 100 < units && units <= 200 )
     {
      n = units*7;
      printf("Your total bill is %dRs", n ); 

     }
       
      else if ( 200 < units && units <= 300 )
     {
      n = units*10;
      printf("Your total bill is %dRs", n ); 

     }

     else if ( 300 < units )
     {
        n = units*12;
      printf("Your total bill is %dRs", n); 
     }     
    return 0;
}
