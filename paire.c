#include <stdio.h>
int main(){
    int a;
    printf("entre un chiffre:");
    scanf("%d",&a);
    if (a%2==0)
    {
     printf(" c est un nombre paire");
    }else if(a%2==1){
        printf("nombre umpaire");
    }else{
        printf("josue est beau");
    }
    return 0;
    
}