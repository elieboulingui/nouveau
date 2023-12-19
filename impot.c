#include <stdio.h>
int main(){
    int age;
    char sexe[23];
    printf("entre ton age:");
    scanf("%d",&age);
    printf("entre ton sexe:");
    scanf("%s",&sexe);
    if(age >=20 && sexe =='m'){
   printf("tu dois paye les imppot");
    }else if(age >= 18 && age <=35 && sexe =='f'){
printf("tu dois payes femme");
    }else{
        printf("josue est beau");
    }
    return 0;
}