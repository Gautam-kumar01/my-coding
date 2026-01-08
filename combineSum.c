#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a :");
    scanf("%d", &a);
    printf("enter the value of b :");
    scanf("%d", &b);
    int c = a/b;
    printf("the value of c is %d\n", c);
    int d = (a+b*c);
    printf("the value of d is %d\n", d);
    int e = (a+b*c/d);
    printf("the value of e is %d", e);
    return 0;
}