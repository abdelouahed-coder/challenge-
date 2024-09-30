#include <stdio.h>
int main(){
int n;
 printf("entrer la taille :");
  scanf("%d", &n);
 int T[n];
  printf("entrer les element\n");
   for(int i = 0; i < n; i++){
       scanf("%d",&T[i]);
   }for(int i = 0; i < n; i++){
       printf("T[%d] =%d\n",i,T[i]);
   }

  return 0;
}
