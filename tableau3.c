#include <stdio.h>
int main(){
int n ,SOME;
 printf("entrer la taille :");
  scanf("%d", &n);
 int T[n];
  printf("entrer les element\n");
   for(int i = 0; i < n; i++){
       scanf("%d",&T[i]);
   }for(int i = 0; i < n; i++){
       printf("T[%d] =%d\n",i,T[i]);
       SOME=SOME+T[i];
   }printf("la some est :%d",SOME);

  return 0;
}
