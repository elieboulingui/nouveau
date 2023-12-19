#include <stdio.h>
int echange(int *a, int *b){
int p;
p = *a;
*a= *b;
*b= p;
}
int main(){
    int a;
    int b;
    printf("entre un chiffre:");
    scanf("%d",&a);
    printf("et l autre:");
    scanf("%d",&b);
    echange( &a,  &b);
 printf("%d et %d",a,b);
 return 0;
}