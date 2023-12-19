#include <stdio.h>
#include <math.h>
int main(){
    float x,y,e,r;
    printf("entre un chiffre:");
    scanf("%f",&x);
     printf("entre un chiffre:");
    scanf("%f",&y);
     printf("entre un chiffre:");
    scanf("%f",&e);
     printf("entre un chiffre:");
    scanf("%f",&r);
     float t = sqrt(pow ((x -y),2) - pow((e - r),2));
    printf("%f",t);
    return 0;
}