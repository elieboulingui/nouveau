#include <stdio.h>
int main(){
    int a;
    printf("entre un chiffre soit 6 OU 4 ,8,2:");
    scanf("%d",&a);
    if(a == 6){
        printf("le presonnage va a droite");
    }else if( a == 4){
        printf("le presonnage va a gauche");
    }else if(a ==8){
        printf("le presonnage va a en haut");
    }else if(a == 2){
        printf("le presonnage va en bas");
    }else{
        printf("il ne bouge pas");
    }
    return 0;
}