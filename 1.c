#include <stdio.h>
int main()
{
    char a;
    printf("ENTER CHARACTER: ");
    scanf("%c", &a);
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("'%c' IS ALPHABET", a);
    }
    else if(a >= '0' && a <= '9')
    {
        printf("'%c' IS DIGIT", a);
    }
    else 
    {
        printf("'%c' IS SPECIAL CHARACTER", a);
    }
    return 0;
}
