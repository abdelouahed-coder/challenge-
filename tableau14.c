#include <stdio.h>
int main(){
int n;
float s = 0,moy;
 printf("entrer le nombre :");
  scanf("%d", &n);
 int T[n];
  printf("entrer les element :\n");
   for(int i = 0; i < n; i++){
       scanf("%d",&T[i]);

   }
   for(int i = 0;i < n;i++){
     s =s + T[i];
    }
      moy = s/n;
      printf("%.2f\n",moy);

    return 0;
}
