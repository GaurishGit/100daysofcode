#include <stdio.h>

int main()
{
    int a , b ,c, d, e;
    
    printf("Enter your principal, rate and time: \n");
    scanf ("%d %d %d" , &a , &b , &c);

    d = (a*b*c)/100 ; 

    e =  (a*(1+ b )^(c));

    printf("Your interest is %d,  %d" , d , e );
    


    
    return 0;
}
