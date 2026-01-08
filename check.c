#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter the cp :");
    scanf("%d", &cp);
    printf("enter the sp :");
    scanf("%d", &sp);
    if(sp>cp){
        printf("profit");
    }
    else{
        printf("loss");
    }
    return 0;
}