#include <stdio.h>
int som(int x,int y){
if(x<y){
    return x;
}else{
    return y;
}
}
int main() {
   int N1,N2,S;
    printf("entrer le 1ere nombre :");
     scanf("%d", &N1);
    printf("entrer le 2eme nombre :");
     scanf("%d", &N2);
     S=som(N1,N2);
     printf("le minimum de nombre ces :%d\n",S);
    return 0;
}
