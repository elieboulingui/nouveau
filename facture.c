#include <stdio.h>
int main(){
    float a = 0.30;
    float b = 0.20;
    float c = 0.25;
    int utilisateur;
    printf("entre ton nombre de copie:");
    scanf("%d",&utilisateur);
    if(utilisateur==10){
        printf("je vous fait une faveur %.02f",a *utilisateur);
    }else if(utilisateur ==20){
        printf("voici votre facture %.02f",c*utilisateur);
    }else if(utilisateur >=21){
    printf("voici votre facture %.02f",b*utilisateur);
    }
    return 0;
}