#include<stdio.h>

int main(int argc, char const *argv[])
{

    int a;
    printf("Enter a number:\n");

    scanf("%d" , &a);
     
    if (a % 2 == 0 ) { 
        printf("Yes this is an even number");
     } else {
       printf("This is an odd number");
  }
    return 0;
}
