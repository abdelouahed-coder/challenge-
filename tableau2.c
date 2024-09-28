#include <stdio.h>

int main() {
    // Write C code here
   int i,n;
    printf("entre d'element");
     scanf("%d", &n);
   int nombre[n];
    for(i = 0 ; i <n ; ++i)
    {
     printf("saiser ces element");
      scanf("%d",&nombre[i]);
 }for(i = 0 ; i <n ; ++i){
     printf("les enement de tableau%d\n",nombre[i]);
 }

    return 0;
}
