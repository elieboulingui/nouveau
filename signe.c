#include <stdio.h>
int main(){
    int a ,b;
    printf("entre un chiffre:");
    scanf("%d",&a);
    printf("entre l autre chiffre:");
    scanf("%d",&b);
    if(a * b >0){
        printf("le signe est le meme \n");
            printf("%d %d ",a,b);
    }else{
        printf("le signe est different\n");
            printf("%d %d ",a,b);
    }

    return 0;
}