#include<stdio.h>

int main(int argc, char const *argv[])
{
int a,b,c,d;
    
printf("Enter you lenght:\n");
scanf("%d",&a );

printf("Enter you Width:\n");
scanf("%d",&b );

c = a * b ;

d = 2*(a+b);

printf("Your area is %d\n", c);

printf("Your perimeter is %d\n" , d );
    return 0;

}
