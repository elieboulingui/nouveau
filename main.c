#include <stdio.h>
int main(){
int annee_de_naissance;
int annee= 2023;
printf("entre ton annee de naissance:");
scanf("%d",&annee_de_naissance);
printf("tu as %d ans",annee-annee_de_naissance);
return 0;
}