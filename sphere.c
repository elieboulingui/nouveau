#include <stdio.h>
#include <math.h>
int main(){
    float a;
    float PI=3.14;
    printf("entre le rayon:");
    scanf("%f",&a);
    float sphere = ( 4*PI*pow(a,4)/3);
    printf("voici le resultat %.2f",sphere);
    return 0;
}