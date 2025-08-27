#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a ;

    printf ("Enter your number\n");
    scanf("%d" , &a);

    if ( a == 0 )
    {   printf ("This is a zero");}

   else  if ( a>0  ) 
   { printf ("This is a positive number\n");}

   else 

   { printf ("This is a negative number\n");}


    return 0;
}
