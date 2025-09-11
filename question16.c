#include<stdio.h>

int main()
{
    int d , e ,f ;
    printf("Enter your number:");
    scanf("%d %d %d" , &d , &e , &f);

    if (d>e && d>f)
    {printf("%d is the greatest number",d);}
    else if (d>f && d>e)
    {printf("%d is the greatest number",d);}
    else if (e>d && e>f)
    {printf("%d is the greatest number",e);}
    else if (e>f&& e>d)
    {printf("%d is the greatest number",e);}
    else { printf("%d is the greatest number",f);}


    
    return 0;
}
