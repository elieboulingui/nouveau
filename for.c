#include <stdio.h>
int main(){
int a;
printf("entre un chiffre:");
scanf("%d",&a);
for (int i = a; i<a + 10; i++)
{
    printf("%d\n",i);
}
return 0;
}