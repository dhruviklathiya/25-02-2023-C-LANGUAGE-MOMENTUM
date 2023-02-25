#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("ENTER VALUE A:");
    scanf("%d",&a);
    printf("ENTER VALUE B:");
    scanf("%d",&b);
    printf("ENTER VALUE C:");
    scanf("%d",&c);
    printf("ENTER VALUE D:");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("A is max with value of %d",a);
    }
    else{
        if (b>a && b>c && b>d)
        {
        printf("B is max with value of %d",b);
        }
        else{
            if (c>a && c>b && c>d)
            {
                printf("C is max with value of %d",c);
            }
            else{
                printf("D is max with value of %d",d);
            }
        }
    }
    return 0;
}
