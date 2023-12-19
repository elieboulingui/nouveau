#include <stdio.h>
int main(){
    int a,b,c;
    printf("ta note");
    scanf("%d",&a);
    printf("ta second note");
    scanf("%d",&b);
    printf("la dernnier");
    scanf("%d",&c);
    if((a+b+c)/3>15){
        printf("felictation ta note %d",(a+b+c)/3);
    }else if((a+b+c)/3>=14&&(a+b+c)/3<=16 ){
        printf("assez bien %d",(a+b+c)/3);
    } else if((a+b+c)/3>=12 && (a+b+c)/3 <=14){
        printf("passable");
    }else if((a+b+c)/3<=10){
        printf("insuffisant");
    }else {
        printf("josue est beau");
    }
    return 0;
}