    #include<stdio.h>

    int a , b ; 
    char c ; 

    int main()
    {
        printf("Enter your equation\n");
        scanf("%d %d %c", &a ,  &b ,  &c);

    switch (c) { 
    
    case '+' : printf("%d" ,a+b );
    break;
        case '-' : printf("%d", a - b );
        break;
        case '*' : printf("%d", a*b );
        break;
        case '/' : printf("%d", a/b );
        break;
        case '%' : printf("%d", a%b );


        break;

        default: "This is invalid";

    }
        return 0;
    }
