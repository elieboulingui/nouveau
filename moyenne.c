#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf(" donne le premier:");
    scanf("%d",&a);
    printf("entre un segond:");
    scanf("%d",&b);
    printf("troisieme:");
    scanf("%d",&c);
    printf("quatrieme:");
    scanf("%d",&d);
    printf("cinq:");
    scanf("%d",&e);
    printf("la somme est %d ",a+b+c+d+e);
    printf("la moyenne est de %d",(a+b+c+d+e)/5);
}