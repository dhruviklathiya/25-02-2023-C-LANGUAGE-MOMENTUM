#include<stdio.h>
int main(){
    float unit,amt,sub,total;
    printf("Enter electricity unit :");
    scanf("%f",&unit);
    if (unit<=50)
    {
        amt = (unit * 0.5);
    }
    else if (unit<=150)
    {
        unit = unit - 50;        
        amt = (unit * 0.75) + 25;
    }
    else if (unit<=250)
    {
        unit = unit - 150;
        amt = (unit * 1.20) + 100;
    }
    else
    {
        unit = unit - 250;
        amt = (unit * 1.50) + 220;
    }
    sub = amt * 20/100;
    total = amt + sub;
    printf("Final amount to pay is:%f",total);
    return 0;
}