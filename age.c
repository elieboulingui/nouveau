#include <stdio.h>
int main(){
    int a;
    printf("entre ton age:");
    scanf("%d",&a);
    if(a>=6 && a<=7){
        printf("poussin de 6 a 7 ans");
    }else if(a >=8 && a<=9){
         printf("PUPILLE de 8 a 9 ans"); 
    }else if(a>=10 && a<=12){
        printf("minime de 10 a 11 ans");
    } else if(a >=12){
        printf("cadet apres 12 ans");
    }
    return 0;
}