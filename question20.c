#include<stdio.h>
int main()

{
int a ; 

printf("Enter the number\n");
scanf("%d", &a);

switch (a)
{  

    case 1: 
       printf("It is monday today");
       break;
    
    case 2: 
       printf("It is tuesday today");
       break;
    
    case 3: 
       printf("It is wednesday today");
       break;
    
    case 4: 
       printf("It is thursday today");
       break;

    case 5: 
       printf("It is friday today");
       break;
    
    case 6: 
       printf("It is saturday today");
       break;

    case 7: 
       printf("It is sunday today");
       break;   
    
    default:
       printf("This is not a valid input");
}









}