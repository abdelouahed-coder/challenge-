#include <stdio.h>
int main(){

 int n,y;
   printf("entrer la taille :");
    scanf("%d", &n);

 int T[n];
   printf("entrer les element :\n");

  for(int i =0; i < n; i++){
      scanf("%d", &T[i]);

  }
  printf("entre un element :");
   scanf("%d",&y);

  for(int i =0; i > n; i++){
  if(T[i] == y){
      printf("ces element trouver");
     return 0;
  }
}

printf("ce element non trouver\n");



  return 0;
}
