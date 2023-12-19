#include <stdio.h>
#include <math.h>
int main(){
    int x;
    int y;
    printf("entre un nombre:");
    scanf("%d",&x);
    printf("entre un autre nombre:");
    scanf("%d",&y);
    int a =  pow(x,y);
    printf("la puissance de x est %d",a);
}