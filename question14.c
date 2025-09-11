#include<stdio.h>

int main(int argc, char const *argv[])
{
    char z ;

    printf("Enter your letter\n");

    scanf("%c" , &z);

    if ( z == 'a' || z =='e'  || z =='i' ||z ==  'o' ||z == 'u' || z == 'A' || z =='E'  || z =='I' ||z ==  'O' ||z == 'U' )
 {printf("This is a vowel");}

    else {printf("This is a consonant"); }
    return 0;
}
