#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a , b , c , d ;
 printf ("Enter the radius\n");
 scanf("%d", &a );

 b = 2*3.14*a ;
 c = 3.14*(a*a);
 
 printf("Your area is %d\n" , c);
 printf("Your parameter is %d\n" , b ); 

    return 0;
}
