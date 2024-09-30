#include <stdio.h>

int main() {
int n , i=0;
 printf("entrer un nombre POSITIF :");
  scanf("%d", &n);
 while(n!=0){
    n = n / 10;
    i++;
 }printf("nombre de chiffres = %d",i);


  return 0;
}
