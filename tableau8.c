#include <stdio.h>
int main(){
int n;
 printf("entrer la taille :");
  scanf("%d", &n);
 int T[n];
  printf("entrer les element :\n");
   for(int i = 0; i < n; i++){
       scanf("%d",&T[i]);

   }int B[n];
    printf("les element de 2eme tableau \n");

      for(int i = 0;i < n; i++){
          B[i]=T[i];
            printf("B[%d]=%d\n",i,B[i]);

      }






  return 0;
}
