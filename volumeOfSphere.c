#include<stdio.h>
int main(){
    int r;
    printf("enter the radius of sphere :");
    scanf("%d", &r);
    float pie = 3.145;
    float v = (4/3*pie*r*r*r); // volume of sphere 
    printf("the volume of sphere is %f", v);
    return 0;

}