#include <stdio.h>
int echange(int *a,int *b){
    int p;
    p = *a;
    *a = *b;
    *b = p;
}
int main(){
    int a, b;
    printf("donne un chiffre:");
    scanf("%d",&a);
    printf("entre un segond:");
    scanf("%d",&b);
    if(a*b>0){
        echange(&a ,&b);
        printf("%d et %d",a,b);
    }else if(a *b <0){
        printf(" l addition de a et b : %d",a+b);
        printf(" la multiplication de a et b :%d",a*b);
    }else{
        printf("je suis a la maison");
    }
    return 0;
}