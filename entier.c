#include <stdio.h>
int main(){
    int a ;
   do
   {
    printf("entre un chiffre\n");
    scanf("%d",&a);
   } while (a<=0);
    for (int i = 1; i <=a; i++)
    {
       if(a%i==0){
        printf("%d est un diviseur de %d\n",i,a);
       }
    }
    
    
}