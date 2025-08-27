#include <stdio.h>

int main()
{
    int a , b, temp ;
    
    printf("Enter your no a : \n");
    scanf("%d", &a);

    printf("Enter your side b : \n");
    scanf("%d" , &b);
 
    temp = a ;

    a = b;
    
    b = temp; 

    printf( " Your value is: %d , %d \n", a , b);
    return 0;
}
