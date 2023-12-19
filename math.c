#include <stdio.h>
int main(){
    int a ,b;
    char m;
    printf("entre un chriffre:");
    scanf("%d",&a);
    printf("entre l operateur:");
    scanf(" %c",&m);
    printf("entre lautre:");
    scanf("%d",&b);
    switch (m)
    {
    case '+':
       printf("%d",a+b);
        break;
    case '-':
    printf("%d",a-b);
    break;
    case '*': 
    printf("%d",a*b);
    break;
    case '/':
    if(b!=0)
    printf("%d",a/b);
    else
    printf("impossible");
    break;
    default:
    printf("josue est beau");
        break;
    }
}