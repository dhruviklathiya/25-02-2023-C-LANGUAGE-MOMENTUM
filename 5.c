#include<stdio.h>
int main(){
    float unit,amt,sub,total;
    printf("Enter electricity unit :");
    scanf("%f",&unit);
    if (unit<=50)
    {
        amt = unit * 0.5; //25
        sub = amt * 20/100;
        total = amt + sub;
        printf("Your total electricity charge is %f:",total);
    }
    else if (51<=unit<=150)
    {
        amt = unit * 0.75; //75
        sub = amt * 20/100;
        total = amt + sub + 25;
        printf("Your total electricity charge is %f:",total);
    }
    else if (151<=unit<=250)
    {
        amt = unit * 1.20; //120
        sub = amt * 20/100;
        total = amt + sub + 100;
        printf("Your total electricity charge is %f:",total);
    }
    else
    {
        amt = unit * 1.50;
        sub = amt * 20/100;
        total = amt + sub + 220;
        printf("Your total electricity charge is %f:",total);
    }
    return 0;
}