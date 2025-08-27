#include<stdio.h>

int main()
{
    int a ,b;

    printf("Enter the temperature in celsius:\n");
    scanf("%d",&a);
  
    b = ((9/5)*a)+32 ;
    
    

    printf("Your temp in F is: %d\n",b);


    return 0;
}
