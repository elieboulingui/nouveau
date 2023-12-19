#include <stdio.h>
int main(){
    int a,b,c;
    printf("entre un nombre:");
    scanf("%d",&a);
    printf("le second:");
    scanf("%d",&b);
    printf("le dernier:");
    scanf("%d",&c);
    printf("resistance en serie %d\n",a+b+c);
    printf("resistance en parralelle %d\n",(a*b*c)/(a*b+a*c+b*c));
    return 0;
}