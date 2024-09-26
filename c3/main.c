#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float tripel;

    printf("donnez moi un entières");
    scanf("%d",&a);

    printf("donnez moi un entières");
    scanf("%d",&b);

    if(a==b){
        tripel=(a+b)*3;
        printf("le resultat est %f",tripel);
         }
  return 0;



}
