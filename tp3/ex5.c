#include<stdio.h>
#include<math.h>

int main() {
    float ca, ci, j, n, x;
    printf("Capital inicial:\n");
    scanf("%f", &ci);
    printf("Taxa de juros:\n");
    scanf("%f", &j);
    printf("Durante quantos anos:\n");
    scanf("%f", &n);
    x = 1 + j/100;
    ca = ci * pow(x, n);
    printf("Capital acumulado: %.03f\n", ca);
}