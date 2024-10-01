#include <stdio.h>
int som(int x,int y){

return x+y;
}
int main() {
   int N1,N2,S;
   printf("entrer 1ere nombre :");
    scanf("%d", &N1);
   printf("entrer 2eme nombre :");
    scanf("%d", &N2);
    S = som(N1,N2);
    printf("la som est :%d",S);

    return 0;
}
