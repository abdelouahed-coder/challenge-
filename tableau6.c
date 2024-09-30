#include <stdio.h>
int main(){
int n ,M,A;
 printf("entrer la taille :");
  scanf("%d", &n);
 int T[n];
  printf("entrer les element\n");
   for(int i = 0; i < n; i++){
       scanf("%d",&T[i]);

   }
printf("entrer le facture multiplie");
 scanf("%d", &A);
   for(int i = 0; i < n; i++){
      M=A*T[i];
       printf("T[%d] x %d = %d\n",i,A,M);
       }





  return 0;
}
