    #include <stdio.h> 
    #include <math.h>

    int main()
    {  
       char alpha ; 

       printf("Drop your input:\n");
       scanf("%c", &alpha );

       if ( 'A' <= alpha && alpha <='Z' )
       { printf ("This is an uppercase alphabet");
       }
       else if ( 'a' <= alpha && alpha <= 'z' )
       { printf ("This is an lowercase alphabet");
       }
       else if ( '0' <= alpha && alpha <= '9' ) 
       {printf("This is a digit");
       }
       
       else 
       {printf("this is a special char");}
        
        return 0;
    }
