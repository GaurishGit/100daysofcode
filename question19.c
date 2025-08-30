#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, z, s, v ;

    printf("Length of the side a\n");
    scanf("%f", &a);

    printf("Length of the side b\n");
    scanf("%f", &b);

    printf("Length of the side c\n");
    scanf("%f", &c);

   
    if ((a+b>c) && (a+c>b) && (c+b>a)) 

    { printf("Yes it is a valid triangle\n");
            
       if (a==b && b==c) 
       { printf ("This is an equilateral triangle\n");
       }
       
       
       
        else if (a==b || b==c || c==a )
       { printf ("This is an isosceles triangle\n"); }
          
         
     
     
      else {printf ("This is a scalene  triangle\n");   
        
           } 

        }

    return 0;
}
