#include <stdio.h>

int main()
{
    char a;
    printf("Press M to print Monday\n");
    printf("Press T to print Tuesday\n");
    printf("Press W to print Wednesday\n");
    printf("Press t to print Thursday\n");
    printf("Press F to print Friday\n");
    printf("Press s to print Saturday\n");
    printf("Press S to print Sunday\n");
    printf("ENTER INPUT :");
    scanf("%c",&a);
    
    switch(a){
        case 'M':
            printf("It's Monday.");
        break;
            
        case 'T':
            printf("It's Tuesday.");
        break;
            
        case 'W':
            printf("It's Wednesday.");
        break;  
            
        case 't':
            printf("It's Thursday.");
        break;  
            
        case 'F':
            printf("It's Friday.");
        break;
            
        case 's':
            printf("It's Saturday.");
        break;
            
        case 'S':
            printf("It's Sunday.");
        break;
            
        default:
        printf("ENTERED VALUE IS INVALID");
        break;
    }
    return 0;
}