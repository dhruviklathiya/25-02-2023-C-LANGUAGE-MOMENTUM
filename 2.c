#include <stdio.h>

int main()
{
    int a;
    printf("ENTER NUMBER YOU WANNA CHECK IF IT'S EVEN OR ODD :");
    scanf("%d",&a);
    (a % 2 == 0) ? 
    printf("%d IS EVEN NUMBER",a)
    :
    printf("%d IS ODD NUMBER",a);
    return 0;
}