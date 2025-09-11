#include <stdio.h>

int main(int argc, char const *argv[])

{
    int a;
    printf("Enter Year:\n");
    scanf("%d" , &a );

    if ( a % 4 == 0)
    {printf("this is a leap year"); 
    }

    else { printf("this is not a leap year");}
    return 0;
}
