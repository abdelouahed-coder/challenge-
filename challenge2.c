#include <stdio.h>

int main() {
    // Write C code here
    float temp;

    printf("Enter temperature: ");
    scanf("%f", &temp);

    float k = 273.15 + temp ;

    printf("temperature en K : %f", k);

    return 0;
}
