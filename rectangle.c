#include <stdio.h>
int main(){
int longeur;
int largeur;
printf("entre la longeur:");
scanf("%d",&longeur);
printf("entre la largeur:");
scanf("%d",&largeur);
printf("le perimetre du rectangle est de %d\n",(longeur + largeur)*2);
printf("la surface du rectangle es de %d",longeur*largeur);
    return 0;
}