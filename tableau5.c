#include <stdio.h>
int main(){
int n ,M;
 printf("entrer la taille :");
  scanf("%d", &n);
 int T[n];
  printf("entrer les element\n");
   for(int i = 0; i < n; i++){
       scanf("%d",&T[i]);

   }
   M = T[0];
   for(int i = 0; i < n; i++){
       if(T[i]<M){
           M = T[i];

       }

   }printf("le minum nombre entre les %d nombre est :%d",n,M);



  return 0;
}
