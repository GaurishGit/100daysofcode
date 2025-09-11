#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a, b; 
    printf("Enter your number\n"); 
    scanf("%f" , &a);

    (b = a%b );
    if ( b == 0 )
    {
        printf("This is not a prime number");
    
    }

    else
    {
        printf("This is a prime number");
    }
    return 0;
}
