#include<stdio.h>

int main(){
    int p,  t;
    printf("enter the value of principal :");
    scanf("%d", &p);
    float r;
    printf("enter  the value of rate :");
    scanf("%f", &r);
    printf("enter the value of time :");
    scanf("%d", &t);
    int si = (p*r*t/100);
    printf("the value of simple intrest is %d", si);
    return 0;
}