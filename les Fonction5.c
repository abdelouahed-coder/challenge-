#include <stdio.h>

int f(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * f(n - 1);
    }
}

int main() {
    int num;
    printf("Enter d'un entier positif: ");
    scanf("%d", &num);
    printf("le factoriel de %d : %d\n", num, f(num));
    return 0;
}
